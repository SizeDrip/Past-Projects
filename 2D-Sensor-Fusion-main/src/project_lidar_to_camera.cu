#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <numeric>
#include <chrono>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core/cuda.hpp> // For OpenCV's CUDA operations, if needed later
#include <opencv2/cudaimgproc.hpp> // CUDA image processing
#include <opencv2/cudaarithm.hpp> // CUDA arithmetic operations
#include <cuda_runtime.h> // For CUDA runtime functions
#include <device_launch_parameters.h> // For CUDA kernel launch parameters

#include "structIO.hpp"

using namespace std;

__global__ void transformLidarPoints(const LidarPoint* lidarPoints, const float* RT, const float* R_rect_00, const float* P_rect_00, cv::Point* outputPoints, int numPoints) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    if (idx >= numPoints) return;

    // Load matrices into shared memory to reduce global memory access
    __shared__ float s_RT[16];
    __shared__ float s_R_rect_00[16];
    __shared__ float s_P_rect_00[12];

    if (threadIdx.x < 16) {
        s_RT[threadIdx.x] = RT[threadIdx.x];
        s_R_rect_00[threadIdx.x] = R_rect_00[threadIdx.x];
        if (threadIdx.x < 12) {
            s_P_rect_00[threadIdx.x] = P_rect_00[threadIdx.x];
        }
    }
    __syncthreads(); // Ensure all data is loaded into shared memory

    // Transform the Lidar point to homogeneous coordinates
    float X[4] = {lidarPoints[idx].x, lidarPoints[idx].y, lidarPoints[idx].z, 1.0f};

    // Conditional checks for point boundaries and reflection intensity
    float maxX = 25.0f, maxY = 6.0f, minZ = -1.4f;
    if(X[0] > maxX || X[0] < 0.0f || fabs(X[1]) > maxY || X[2] < minZ || lidarPoints[idx].r < 0.01f) {
        return; // Skip this point if it doesn't meet the criteria
    }

    // Perform matrix multiplication: RT * X using shared memory
    float Y[4] = {0};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            Y[i] += s_RT[i * 4 + j] * X[j];
        }
    }

    // Perform matrix multiplication: R_rect_00 * Y using shared memory
    float Z[4] = {0};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            Z[i] += s_R_rect_00[i * 4 + j] * Y[j];
        }
    }

    // Project onto image plane: P_rect_00 * Z using shared memory
    float point2D[3] = {0};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            point2D[i] += s_P_rect_00[i * 4 + j] * Z[j];
        }
    }

    // Convert to 2D image coordinates
    outputPoints[idx].x = static_cast<int>(point2D[0] / point2D[2]);
    outputPoints[idx].y = static_cast<int>(point2D[1] / point2D[2]);
}

void overlayGPS(cv::Mat& image, const std::string& text, const cv::Point& org) {
    int fontFace = cv::FONT_HERSHEY_SIMPLEX;
    double fontScale = 0.5;
    int thickness = 1;
    cv::Scalar color(0, 255, 0); // Green color for the text
    int lineType = cv::LINE_8;
    bool bottomLeftOrigin = false;

    // Create a transparent overlay by copying the original image
    cv::Mat overlay = image.clone();
    // Put the text on the overlay
    cv::putText(overlay, text, org, fontFace, fontScale, color, thickness, lineType, bottomLeftOrigin);

    // Blend the overlay with the original image
    double alpha = 1.0; // Transparency factor
    cv::addWeighted(overlay, alpha, image, 1 - alpha, 0, image);
}

bool readGPSData(const string& filename, float& latitude, float& longitude) {
    ifstream gpsFile(filename);
    if (!gpsFile.is_open()) {
        cerr << "Error opening GPS data file: " << filename << endl;
        return false;
    }

    string line;
    if (getline(gpsFile, line)) {
        istringstream iss(line);
        if (!(iss >> latitude >> longitude)) {
            cerr << "Error parsing GPS data line: " << line << endl;
            return false;
        }
    } else {
        cerr << "Error reading GPS data line from file: " << filename << endl;
        return false;
    }

    gpsFile.close();
    return true;
}



void convertMatToFloatArray(const cv::Mat& inputMat, float* outputArray) {
    for (int i = 0; i < inputMat.rows; ++i) {
        for (int j = 0; j < inputMat.cols; ++j) {
            outputArray[i * inputMat.cols + j] = static_cast<float>(inputMat.at<double>(i, j));
        }
    }
}

void loadCalibrationData(cv::Mat &P_rect_00, cv::Mat &R_rect_00, cv::Mat &RT)
{
    RT.at<double>(0,0) = 7.533745e-03; RT.at<double>(0,1) = -9.999714e-01; RT.at<double>(0,2) = -6.166020e-04; RT.at<double>(0,3) = -4.069766e-03;
    RT.at<double>(1,0) = 1.480249e-02; RT.at<double>(1,1) = 7.280733e-04; RT.at<double>(1,2) = -9.998902e-01; RT.at<double>(1,3) = -7.631618e-02;
    RT.at<double>(2,0) = 9.998621e-01; RT.at<double>(2,1) = 7.523790e-03; RT.at<double>(2,2) = 1.480755e-02; RT.at<double>(2,3) = -2.717806e-01;
    RT.at<double>(3,0) = 0.0; RT.at<double>(3,1) = 0.0; RT.at<double>(3,2) = 0.0; RT.at<double>(3,3) = 1.0;
    
    R_rect_00.at<double>(0,0) = 9.999239e-01; R_rect_00.at<double>(0,1) = 9.837760e-03; R_rect_00.at<double>(0,2) = -7.445048e-03; R_rect_00.at<double>(0,3) = 0.0;
    R_rect_00.at<double>(1,0) = -9.869795e-03; R_rect_00.at<double>(1,1) = 9.999421e-01; R_rect_00.at<double>(1,2) = -4.278459e-03; R_rect_00.at<double>(1,3) = 0.0;
    R_rect_00.at<double>(2,0) = 7.402527e-03; R_rect_00.at<double>(2,1) = 4.351614e-03; R_rect_00.at<double>(2,2) = 9.999631e-01; R_rect_00.at<double>(2,3) = 0.0;
    R_rect_00.at<double>(3,0) = 0; R_rect_00.at<double>(3,1) = 0; R_rect_00.at<double>(3,2) = 0; R_rect_00.at<double>(3,3) = 1;
    
    P_rect_00.at<double>(0,0) = 7.215377e+02; P_rect_00.at<double>(0,1) = 0.000000e+00; P_rect_00.at<double>(0,2) = 6.095593e+02; P_rect_00.at<double>(0,3) = 0.000000e+00;
    P_rect_00.at<double>(1,0) = 0.000000e+00; P_rect_00.at<double>(1,1) = 7.215377e+02; P_rect_00.at<double>(1,2) = 1.728540e+02; P_rect_00.at<double>(1,3) = 0.000000e+00;
    P_rect_00.at<double>(2,0) = 0.000000e+00; P_rect_00.at<double>(2,1) = 0.000000e+00; P_rect_00.at<double>(2,2) = 1.000000e+00; P_rect_00.at<double>(2,3) = 0.000000e+00;

}

bool readLidarPts(const string& filename, vector<LidarPoint>& lidarPoints) {
    std::ifstream file(filename, std::ios::binary); // Open the file in binary mode
    if (!file.is_open()) {
        cerr << "Error opening LiDAR data file: " << filename << endl;
        return false;
    }

    float buffer[4]; // Buffer to hold each point (r, x, y, z)

    while (file.read(reinterpret_cast<char*>(&buffer), sizeof(buffer))) {
        LidarPoint point;
        point.x = buffer[0]; // Reflectivity
        point.y = buffer[1]; // X coordinate
        point.z = buffer[2]; // Y coordinate
        point.r = buffer[3]; // Z coordinate

        lidarPoints.push_back(point);

        // Print out the r, x, y, and z values
        //cout << "r: " << point.r << ", x: " << point.x << ", y: " << point.y << ", z: " << point.z << endl;
    }

    file.close();
    return true;
}



void projectLidarToCamera2() {
    string basePathImages = "C:/Users/coope/Desktop/2D-Sensor-Fusion-main/images/new_images/image_00/data/";
    string basePathLidar = "C:/Users/coope/Desktop/2D-Sensor-Fusion-main/dat/new_dat/data/";
    string basePathGPS = "C:/Users/coope/Desktop/2D-Sensor-Fusion-main/dat/new_dat/oxts/data/";

    // Define a window for displaying the results
    string windowName = "Lidar Points Projected on Images";
    cv::namedWindow(windowName, cv::WINDOW_NORMAL); // Use WINDOW_AUTOSIZE for an auto-sized window

    for (int i = 0; i <= 77; i++) {
        stringstream ss;
        ss << setw(10) << setfill('0') << i;
        //stringstream sl;
        //sl << setw(4) << setfill('0') << i;
        string imageFileName = basePathImages + ss.str() + ".png";
        string lidarFileName = basePathLidar + ss.str() + ".bin";
        string gpsFileName = basePathGPS + ss.str() + ".txt";

        auto start = chrono::high_resolution_clock::now();
        cv::Mat imgHost = cv::imread(imageFileName);
        if (imgHost.empty()) {
            cerr << "Could not read image file: " << imageFileName << endl;
            continue;
        }
        cv::cuda::GpuMat imgDevice;
        imgDevice.upload(imgHost);

        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Time taken by image read/upload: " << duration.count() << " microseconds" << endl;

        // Load Lidar points from file (assuming readLidarPts is implemented correctly)
        start = chrono::high_resolution_clock::now();
        vector<LidarPoint> lidarPoints;
        if (!readLidarPts(lidarFileName, lidarPoints)) {
            cerr << "Could not read LiDAR data file: " << lidarFileName << endl;
            continue;
        }
        
        // Store Lidar points in GPU memory
        LidarPoint* d_lidarPoints;
        cudaMalloc(&d_lidarPoints, lidarPoints.size() * sizeof(LidarPoint));
        cudaMemcpy(d_lidarPoints, lidarPoints.data(), lidarPoints.size() * sizeof(LidarPoint), cudaMemcpyHostToDevice);

        stop = chrono::high_resolution_clock::now();
        duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Time taken by lidar data read/upload: " << duration.count() << " microseconds" << endl; //this takes awhile!

        start = chrono::high_resolution_clock::now();

        // Load and convert calibration data to GPU
        cv::Mat P_rect_00(3, 4, CV_64F), R_rect_00(4, 4, CV_64F), RT(4, 4, CV_64F);
        loadCalibrationData(P_rect_00, R_rect_00, RT);

        float h_RT[16], h_R_rect_00[16], h_P_rect_00[12];
        convertMatToFloatArray(RT, h_RT);
        convertMatToFloatArray(R_rect_00, h_R_rect_00);
        convertMatToFloatArray(P_rect_00, h_P_rect_00);

        float *d_RT, *d_R_rect_00, *d_P_rect_00;
        cv::Point *d_outputPoints;

        stop = chrono::high_resolution_clock::now();
        duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Time taken to load, convert calibration data to GPU: " << duration.count() << " microseconds" << endl;

        start = chrono::high_resolution_clock::now();

        cudaMalloc(&d_RT, 16 * sizeof(float));
        cudaMalloc(&d_R_rect_00, 16 * sizeof(float));
        cudaMalloc(&d_P_rect_00, 12 * sizeof(float));
        cudaMalloc(&d_outputPoints, lidarPoints.size() * sizeof(cv::Point));

        stop = chrono::high_resolution_clock::now();
        duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Time taken by memory allocation: " << duration.count() << " microseconds" << endl; //end area of interest

        start = chrono::high_resolution_clock::now();

        cudaMemcpy(d_RT, h_RT, 16 * sizeof(float), cudaMemcpyHostToDevice);
        cudaMemcpy(d_R_rect_00, h_R_rect_00, 16 * sizeof(float), cudaMemcpyHostToDevice);
        cudaMemcpy(d_P_rect_00, h_P_rect_00, 12 * sizeof(float), cudaMemcpyHostToDevice);

        stop = chrono::high_resolution_clock::now();
        duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Time taken by memory copy to device: " << duration.count() << " microseconds" << endl;

        start = chrono::high_resolution_clock::now();

        int threadsPerBlock = 256;
        //int blocksPerGrid = (lidarPoints.size() + threadsPerBlock - 1) / threadsPerBlock;
        int elementsPerThread = 1;
        int blocksPerGrid = (lidarPoints.size() + (threadsPerBlock * elementsPerThread) - 1) / (threadsPerBlock * elementsPerThread);

        transformLidarPoints<<<blocksPerGrid, threadsPerBlock>>>(d_lidarPoints, d_RT, d_R_rect_00, d_P_rect_00, d_outputPoints, lidarPoints.size());

        cudaDeviceSynchronize();

        stop = chrono::high_resolution_clock::now();
        duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Time taken by kernel execution: " << duration.count() << " microseconds" << endl;

        start = chrono::high_resolution_clock::now();

        vector<cv::Point> h_outputPoints(lidarPoints.size());
        cudaMemcpy(h_outputPoints.data(), d_outputPoints, lidarPoints.size() * sizeof(cv::Point), cudaMemcpyDeviceToHost);

        stop = chrono::high_resolution_clock::now();
        duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Time taken by memory copy to host: " << duration.count() << " microseconds" << endl;

        start = chrono::high_resolution_clock::now();

        cv::Mat overlayHost = imgHost.clone();
        for (const auto& pt : h_outputPoints) {
            if (pt.x >= 0 && pt.x < overlayHost.cols && pt.y >= 0 && pt.y < overlayHost.rows) {
                cv::circle(overlayHost, pt, 5, cv::Scalar(0, 255, 0), -1);
            }
        }

        float latitude, longitude;

        if (!readGPSData(gpsFileName, latitude, longitude)) {
            cerr << "Could not read GPS data for frame: " << i << endl;
            continue;
        }

         // Prepare the GPS text
        stringstream gpsText;
        gpsText << fixed << setprecision(6) << "Lat: " << latitude << ", Lon: " << longitude;

        // Overlay the GPS text on the image
        cv::Point textOrg(10, 30);
        overlayGPS(overlayHost, gpsText.str(), textOrg);

        stop = chrono::high_resolution_clock::now();
        duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Time taken by drawing points & calling GPS data: " << duration.count() << " microseconds" << endl;

        start = chrono::high_resolution_clock::now();

        cv::cuda::GpuMat overlayDevice;
        overlayDevice.upload(overlayHost);

        cv::cuda::GpuMat resultDevice;
        cv::cuda::addWeighted(overlayDevice, 1.0, imgDevice, 0.6, 0, resultDevice);

        cv::Mat resultHost;
        resultDevice.download(resultHost);

        stop = chrono::high_resolution_clock::now();
        duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Time taken by image processing: " << duration.count() << " microseconds" << endl;

        cv::imshow(windowName, resultHost);

        start = chrono::high_resolution_clock::now();

        cudaFree(d_lidarPoints);
        cudaFree(d_RT);
        cudaFree(d_R_rect_00);
        cudaFree(d_P_rect_00);
        cudaFree(d_outputPoints);

        stop = chrono::high_resolution_clock::now();
        duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cout << "Time taken by memory deallocation: " << duration.count() << " microseconds" << endl; //start area of interest

        cv::waitKey(50);
    }
    cv::destroyAllWindows(); // Clean up window resources
}

int main()
{
    projectLidarToCamera2();
}