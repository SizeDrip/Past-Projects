cmake_minimum_required(VERSION 3.28)

set(CXX_FLAGS "-Wall" "-pedantic")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(camera_fusion)

find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )
link_directories(${OpenCV_LIBRARY_DIRS})
add_definitions(${OpenCV_DEFINITIONS})

# Executables for exercises
add_executable (show_lidar_top_view src/show_lidar_top_view.cpp src/structIO.cpp)
target_link_libraries ( show_lidar_top_view ${OpenCV_LIBRARIES} )

add_executable (project_lidar_to_camera src/project_lidar_to_camera.cpp src/structIO.cpp)
target_link_libraries ( project_lidar_to_camera ${OpenCV_LIBRARIES} )

#add_executable (filter_lidar_points src/filter_lidar_points.cpp src/structIO.cpp)
#target_link_libraries ( filter_lidar_points ${OpenCV_LIBRARIES} )
