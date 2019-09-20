cmake_minimum_required(VERSION 3.13)
project(clion_opencv_tutorials2)

set(CMAKE_CXX_STANDARD 11)

set(OpenCV_DIR "C:\\opencv-build\\opencv-3.4.7-qt\\install")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(clion_opencv_app main.cpp)
add_executable(line ./line/line.cpp)
add_executable(histNormalized ./normalize/histNormalized.cpp)


target_link_libraries(clion_opencv_app ${OpenCV_LIBS})
target_link_libraries(line ${OpenCV_LIBS})
target_link_libraries(histNormalized ${OpenCV_LIBS})
