cmake_minimum_required(VERSION 3.22)
project(cuda-v-checker LANGUAGES CXX)

add_executable(cuda-v-checker src/cpp/main.cpp)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/find")

file(GLOB CMAKE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/cmake/*.cmake")
foreach(cmake_file ${CMAKE_FILES})
    include(${cmake_file})
endforeach()