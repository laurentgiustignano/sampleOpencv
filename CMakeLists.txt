cmake_minimum_required(VERSION 3.24)
project(sampleOpencv)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenCV)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(sampleOpencv main.cpp)
target_link_libraries(sampleOpencv ${OpenCV_LIBS})
