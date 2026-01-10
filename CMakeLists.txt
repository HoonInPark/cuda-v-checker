cmake_minimum_required(VERSION 3.22)
project(cuda-v-checker LANGUAGES CXX)

# --- CUDA ---
find_package(CUDA REQUIRED)

add_executable(cuda-v-checker src/main.cpp)

target_include_directories(cuda-v-checker PRIVATE
        ${CUDA_INCLUDE_DIRS}
)

target_link_libraries(cuda-v-checker PRIVATE
        ${CUDA_LIBRARIES}
)