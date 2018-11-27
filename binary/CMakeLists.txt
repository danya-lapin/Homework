cmake_minimum_required(VERSION 3.12)
project(binary C)

set(CMAKE_C_STANDARD 99)

add_executable(binary main.c)
target_link_libraries(binary m)