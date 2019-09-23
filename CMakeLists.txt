cmake_minimum_required(VERSION 3.13)
project(clion_opencv_tutorials2)

set(CMAKE_CXX_STANDARD 11)

set(OpenCV_DIR "C:\\opencv-build\\opencv-3.4.7-qt\\install")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(clion_opencv_app main.cpp)
add_executable(thresh ./outline/thresh.cpp)
add_executable(threshold_OpenCV3 ./outline/threshold_OpenCV3.cpp)


target_link_libraries(clion_opencv_app ${OpenCV_LIBS})
target_link_libraries(thresh ${OpenCV_LIBS})
target_link_libraries(threshold_OpenCV3 ${OpenCV_LIBS})
