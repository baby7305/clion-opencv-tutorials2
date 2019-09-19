cmake_minimum_required(VERSION 3.13)
project(clion_opencv_tutorials2)

set(CMAKE_CXX_STANDARD 11)

set(OpenCV_DIR "C:\\opencv-build\\opencv-3.4.7-qt\\install")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(clion_opencv_app main.cpp)
add_executable(warpAffine ./affine/warpAffine.cpp)
add_executable(rotate_OpenCV3 ./affine/rotate_OpenCV3.cpp)
add_executable(perspective ./perspective/perspective.cpp)


target_link_libraries(clion_opencv_app ${OpenCV_LIBS})
target_link_libraries(warpAffine ${OpenCV_LIBS})
target_link_libraries(rotate_OpenCV3 ${OpenCV_LIBS})
target_link_libraries(perspective ${OpenCV_LIBS})
