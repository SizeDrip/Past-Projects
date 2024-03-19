cmake_minimum_required(VERSION 3.26)
message("CMake version: ${CMAKE_VERSION}")
# Enable C++ and CUDA languages
project(camera_fusion LANGUAGES CXX CUDA)

set(CXX_FLAGS "-Wall" "-pedantic")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

#find_package(CUDAToolkit)
#set(OpenCV_DIR "C:/Program Files (x86)/opencv/build")
set(CUDA_DIR "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v12.3")
find_package(OpenCV REQUIRED)
#find_package(OpenCV REQUIRED COMPONENTS core cudaarithm cudaimgproc) # Specify required OpenCV components

include_directories(${OpenCV_INCLUDE_DIRS} ${CUDA_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS} ${CUDA_LIBRARY_DIRS})
add_definitions(${OpenCV_DEFINITIONS})

# Executables for exercises
add_executable(show_lidar_top_view src/show_lidar_top_view.cpp src/structIO.cpp)
target_link_libraries(show_lidar_top_view ${OpenCV_LIBRARIES})

add_executable(project_lidar_to_camera src/project_lidar_to_camera.cu src/structIO.cpp)
target_link_libraries(project_lidar_to_camera ${OpenCV_LIBRARIES} ${CUDA_LIBRARIES} ${CUDA_CUFFT_LIBRARIES})

# If you have other executables, link them similarly
# add_executable(filter_lidar_points src/filter_lidar_points.cpp src/structIO.cpp)
# target_link_libraries(filter_lidar_points ${OpenCV_LIBRARIES})
