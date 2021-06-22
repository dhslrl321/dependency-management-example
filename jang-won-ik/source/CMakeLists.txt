cmake_minimum_required(VERSION 3.19)
project(source C)

set(CMAKE_C_STANDARD 99)

add_executable(variables keyword_1/variables.c)
add_executable(main main.c)
add_executable(condition keyword_1/condition.c)
add_executable(switch keyword_1/switch.c)