cmake_minimum_required(VERSION 3.13)
project(clion_opencv_tutorials2)

set(CMAKE_CXX_STANDARD 11)

set(OpenCV_DIR "C:\\opencv-build\\opencv-3.4.7-qt\\install")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(clion_opencv_app main.cpp)
add_executable(conv2D ./discrete/conv2D.cpp)
add_executable(copyMakeBorder ./discrete/copyMakeBorder.cpp)
add_executable(sepConv2D_X_Y ./discrete/sepConv2D_X_Y.cpp)
add_executable(gaussBlur ./gaussBlur/gaussBlur.cpp)
add_executable(fastMeanBlur ./fastMeanBlur/fastMeanBlur.cpp)
add_executable(medianSmooth ./medianSmooth/medianSmooth.cpp)
add_executable(bilateralFiltering ./bilateralFiltering/BilateralFiltering.cpp)
add_executable(bilateralFilteringColor ./bilateralFiltering/BilateralFilteringColor.cpp)


target_link_libraries(clion_opencv_app ${OpenCV_LIBS})
target_link_libraries(conv2D ${OpenCV_LIBS})
target_link_libraries(copyMakeBorder ${OpenCV_LIBS})
target_link_libraries(sepConv2D_X_Y ${OpenCV_LIBS})
target_link_libraries(gaussBlur ${OpenCV_LIBS})
target_link_libraries(fastMeanBlur ${OpenCV_LIBS})
target_link_libraries(medianSmooth ${OpenCV_LIBS})
target_link_libraries(bilateralFiltering ${OpenCV_LIBS})
target_link_libraries(bilateralFilteringColor ${OpenCV_LIBS})
