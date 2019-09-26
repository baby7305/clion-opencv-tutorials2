cmake_minimum_required(VERSION 3.13)
project(clion_opencv_tutorials2)

set(CMAKE_CXX_STANDARD 11)

set(OpenCV_DIR "C:\\opencv-build\\opencv-3.4.7-qt\\install")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(clion_opencv_app main.cpp)
add_executable(fft2 ./fft2/fft2.cpp)
add_executable(spectrum ./spectrum/spectrum.cpp)
add_executable(saliencyMap ./saliencyMap/saliencyMap.cpp)


target_link_libraries(clion_opencv_app ${OpenCV_LIBS})
target_link_libraries(fft2 ${OpenCV_LIBS})
target_link_libraries(spectrum ${OpenCV_LIBS})
target_link_libraries(saliencyMap ${OpenCV_LIBS})
