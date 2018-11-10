cmake_minimum_required(VERSION 3.12)
project(QuickSort C)

set(CMAKE_C_STANDARD 11)

add_executable(QuickSort main.c quicksort.c quicksort.h)