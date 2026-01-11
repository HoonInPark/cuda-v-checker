cmake_minimum_required(VERSION 3.22)
project(cuda-v-checker LANGUAGES CXX)

add_executable(cuda-v-checker src/cpp/main.cpp)

file(GLOB FIND_FILES "${CMAKE_CURRENT_SOURCE_DIR}/cmake/find/*.cmake")
foreach(find_file ${FIND_FILES})
    include(${find_file})
endforeach()

file(GLOB CMAKE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/cmake/*.cmake")
foreach(cmake_file ${CMAKE_FILES})
    include(${cmake_file})
endforeach()