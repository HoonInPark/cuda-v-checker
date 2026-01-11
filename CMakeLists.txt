cmake_minimum_required(VERSION 3.22)
project(cuda-v-checker LANGUAGES CXX)

add_executable(cuda-v-checker src/main.cpp)

include(cmake/cuda.cmake)