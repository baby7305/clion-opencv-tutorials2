cmake_minimum_required(VERSION 3.13)
project(clion_opencv_tutorials2)

set(CMAKE_CXX_STANDARD 11)

set(OpenCV_DIR "C:\\opencv-build\\opencv-3.4.7-qt\\install")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(clion_opencv_app main.cpp)
add_executable(roberts ./roberts/roberts.cpp)
add_executable(prewitt ./prewitt/prewitt.cpp)
add_executable(sobel ./sobel/sobel.cpp)
add_executable(scharr ./scharr/scharr.cpp)
add_executable(kirsch ./kirsch/kirsch.cpp)


target_link_libraries(clion_opencv_app ${OpenCV_LIBS})
target_link_libraries(roberts ${OpenCV_LIBS})
target_link_libraries(prewitt ${OpenCV_LIBS})
target_link_libraries(sobel ${OpenCV_LIBS})
target_link_libraries(scharr ${OpenCV_LIBS})
target_link_libraries(kirsch ${OpenCV_LIBS})
