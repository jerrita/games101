cmake_minimum_required (VERSION 3.10)
project (Transformation)

set(CMAKE_CXX_STANDARD 20)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable (Transformation main.cpp)
