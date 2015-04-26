cmake_minimum_required(VERSION 2.8.4)
project(CLionTest1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fopenmp")

set(SOURCE_FILES main.c)
add_executable(untitledqweqwe ${SOURCE_FILES})
