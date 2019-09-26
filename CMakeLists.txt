cmake_minimum_required(VERSION 3.13)
project(clion_opencv_tutorials2)

set(CMAKE_CXX_STANDARD 11)

set(OpenCV_DIR "C:\\opencv-build\\opencv-3.4.7-qt\\install")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(clion_opencv_app main.cpp)
add_executable(boxPoints_OpenCV3 ./pointSets/boxPoints_OpenCV3.cpp)
add_executable(convexHull ./pointSets/convexHull.cpp)
add_executable(minEnclosingTriangle ./pointSets/minEnclosingTriangle.cpp)
add_executable(RotatedRect ./pointSets/RotatedRect.cpp)
add_executable(HTLine ./houghLine/HTLine.cpp)


target_link_libraries(clion_opencv_app ${OpenCV_LIBS})
target_link_libraries(boxPoints_OpenCV3 ${OpenCV_LIBS})
target_link_libraries(convexHull ${OpenCV_LIBS})
target_link_libraries(minEnclosingTriangle ${OpenCV_LIBS})
target_link_libraries(RotatedRect ${OpenCV_LIBS})
target_link_libraries(HTLine ${OpenCV_LIBS})
