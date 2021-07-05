cmake_minimum_required(VERSION 3.19)
project(source2)

set(CMAKE_CXX_STANDARD 14)

add_executable(source2 main.cpp)
add_executable(io keyword_1/namespace.cpp)

add_executable(input keyword_1/input.cpp)
add_executable(cin_getline keyword_1/cin_getline.cpp)