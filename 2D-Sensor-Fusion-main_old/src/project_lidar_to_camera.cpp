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

#include "structIO.hpp"

using namespace std;

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

cv::Mat projectAndOverlayPoints(const cv::Mat& img, const vector<LidarPoint>& lidarPoints, const cv::Mat& P_rect_00, const cv::Mat& R_rect_00, const cv::Mat& RT, chrono::high_resolution_clock::time_point& startDrawing)
{
    startDrawing = chrono::high_resolution_clock::now(); // Start timing drawing points

    cv::Mat overlay = img.clone();
    for(const auto& point : lidarPoints)
    {
        // Filter out points based on conditions
        if(point.x > 25.0 || point.x < 0.0 || abs(point.y) > 6.0 || point.z < -1.4 || point.r < 0.01)
        {
            continue; // Skip points that don't meet the criteria
        }

        // Project LiDAR points onto the camera image
        cv::Mat X = (cv::Mat_<double>(4,1) << point.x, point.y, point.z, 1);
        cv::Mat Y = P_rect_00 * R_rect_00 * RT * X;
        int x = static_cast<int>(Y.at<double>(0,0) / Y.at<double>(2,0));
        int y = static_cast<int>(Y.at<double>(1,0) / Y.at<double>(2,0));

        // Draw the points on the overlay image
        if(x >= 0 && x < overlay.cols && y >= 0 && y < overlay.rows)
        {
            cv::circle(overlay, cv::Point(x,y), 5, cv::Scalar(0, 255, 0), -1);
        }
    }

    return overlay;
}

void projectLidarToCamera2()
{
    string basePathImages = "C:/Users/coope/Desktop/2D-Sensor-Fusion-main/images/new_images/image_00/data/"; // Update this path
    string basePathLidar = "C:/Users/coope/Desktop/2D-Sensor-Fusion-main/dat/new_dat/data/"; // Update this path

    cv::namedWindow("LiDAR data on image overlay", cv::WINDOW_NORMAL);

    for(int frame = 0; frame <= 77; ++frame) // Assuming there are 78 frames
    {
        auto startOverall = chrono::high_resolution_clock::now();

        stringstream ss;
        ss << setw(10) << setfill('0') << frame;
        string imageFilePath = basePathImages + ss.str() + ".png";
        string lidarFilePath = basePathLidar + ss.str() + ".bin";

        auto start = chrono::high_resolution_clock::now(); // Start timing image read
        cv::Mat img = cv::imread(imageFilePath);
        auto stop = chrono::high_resolution_clock::now();
        cout << "Time taken by image read/upload: " << chrono::duration_cast<chrono::microseconds>(stop - start).count() << " microseconds" << endl;

        start = chrono::high_resolution_clock::now(); // Start timing LiDAR read
        vector<LidarPoint> lidarPoints;
        if(!readLidarPts(lidarFilePath, lidarPoints)) continue; // Skip if LiDAR data not loaded
        stop = chrono::high_resolution_clock::now();
        cout << "Time taken by lidar data read/upload: " << chrono::duration_cast<chrono::microseconds>(stop - start).count() << " microseconds" << endl;

        start = chrono::high_resolution_clock::now(); // Start timing calibration data loading
        cv::Mat P_rect_00(3, 4, CV_64F), R_rect_00(4, 4, CV_64F), RT(4, 4, CV_64F);
        loadCalibrationData(P_rect_00, R_rect_00, RT);
        stop = chrono::high_resolution_clock::now();
        cout << "Time taken to load, convert calibration data: " << chrono::duration_cast<chrono::microseconds>(stop - start).count() << " microseconds" << endl;

        chrono::high_resolution_clock::time_point startDrawing; // Declare variable for drawing start time
        cv::Mat overlay = projectAndOverlayPoints(img, lidarPoints, P_rect_00, R_rect_00, RT, startDrawing);

        stop = chrono::high_resolution_clock::now(); // Stop timing after drawing points
        cout << "Time taken by drawing points: " << chrono::duration_cast<chrono::microseconds>(stop - startDrawing).count() << " microseconds" << endl;

        start = chrono::high_resolution_clock::now(); // Start timing image processing
        cv::imshow("LiDAR data on image overlay", overlay);
        stop = chrono::high_resolution_clock::now();
        cout << "Time taken by image processing: " << chrono::duration_cast<chrono::microseconds>(stop - start).count() << " microseconds" << endl;

        int key = cv::waitKey(30); // 30ms delay for ~33fps. Adjust as needed
        if(key == 27) break; // Exit loop if ESC is pressed

        auto stopOverall = chrono::high_resolution_clock::now(); // Stop overall timing
        cout << "Total time for frame processing: " << chrono::duration_cast<chrono::microseconds>(stopOverall - startOverall).count() << " microseconds" << endl << endl;
    }

    cv::destroyAllWindows();
}

int main()
{
    projectLidarToCamera2();
}
