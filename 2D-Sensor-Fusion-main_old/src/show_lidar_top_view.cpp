#include <iostream>
#include <numeric>
#include <chrono>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include "structIO.hpp"

using namespace std;

void showLidarTopview()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::vector<LidarPoint> lidarPoints; //dynamic array of LidarPoint structures
    readLidarPts("C:/Users/coope/Desktop/2D-Sensor-Fusion-main/dat/C51_LidarPts_0000.txt", lidarPoints); //data read correctly!

    cv::Size worldSize(10.0, 20.0); // width and height of sensor field in m
    cv::Size imageSize(1000, 2000); // corresponding top view image in pixel

    // create topview image
    cv::Mat topviewImg(imageSize, CV_8UC3, cv::Scalar(0, 0, 0)); //image with black pixels

    // plot Lidar points into image
    for (auto it = lidarPoints.begin(); it != lidarPoints.end(); ++it)
    {
        //printf("Plotting...\n");
        //Looks like data isn't being received here. why?
        float xw = static_cast<float>((*it).x); // world x coord
        float yw = static_cast<float>((*it).y); // world y coord
        float zw = static_cast<float>((*it).z); // world z coord

        //transform world coords into top-down pixel coords
        int y = static_cast<int>((-xw * imageSize.height / worldSize.height) + imageSize.height); //y coordinate = (-xw * image height / world height) + image height)
        int x = static_cast<int>((-yw * imageSize.width / worldSize.width) + imageSize.width / 2); //x coordinate = (-yw * image width / world width) + image width / 2

        cv::circle(topviewImg, cv::Point(x, y), 5, cv::Scalar(0, 0, 255), -1);

        if(zw > -1.40){ //if object not on the road
            //printf("xw = %f, yw = %f, zw = %f\n", xw, yw, zw);
            float val = xw; // calculate color based on x value
            float maxVal = static_cast<float>(worldSize.height); // Ensure maxVal is float
            int red = min(255, static_cast<int>(255 * fabs((val - maxVal) / maxVal)));
            int green = min(255, static_cast<int>(255 * (1 - fabs((val - maxVal) / maxVal))));

            cv::circle(topviewImg, cv::Point(x, y), 5, cv::Scalar(0, green, red), -1); //draw circle at calculated image coords
        }
    }

    // plot distance (y) markers
    float lineSpacing = 2.0f; // gap between distance markers, ensure it's a float
    int nMarkers = static_cast<int>(floor(worldSize.height / lineSpacing)); // Explicit cast to int
    for (size_t i = 0; i < nMarkers; ++i)
    {
        int y = static_cast<int>((-(i * lineSpacing) * imageSize.height / worldSize.height) + imageSize.height); // calculate y pos for each line
        cv::line(topviewImg, cv::Point(0, y), cv::Point(imageSize.width, y), cv::Scalar(255, 0, 0)); //draw line for distance
    }

    // display image
    string windowName = "Top-View Perspective of LiDAR data";
    cv::namedWindow(windowName, 2);
    cv::imshow(windowName, topviewImg);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << "Time taken: " << duration.count() << " milliseconds" << std::endl;
    cv::waitKey(0); // wait for key to be pressed
}

int main()
{
    showLidarTopview();
}
