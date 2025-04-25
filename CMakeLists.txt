cmake_minimum_required(VERSION 3.10)
project(MathExample)

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

add_library(math_lib src/math.cpp)

enable_testing()
add_subdirectory(tests)
