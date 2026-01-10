cmake_minimum_required(VERSION 3.22)
project(cuda-v-checker LANGUAGES CXX)

# --- CUDA ---
find_package(CUDA REQUIRED)

# --- cuDNN ---
#find_package(CUDNN REQUIRED)

# --- TensorRT ---
#find_package(TensorRT REQUIRED)

add_executable(cuda-v-checker src/main.cpp)

target_include_directories(cuda-v-checker PRIVATE
        ${CUDA_INCLUDE_DIRS}
#        ${CUDNN_INCLUDE_DIRS}
#        ${TENSORRT_INCLUDE_DIRS}
)

target_link_libraries(cuda-v-checker PRIVATE
        ${CUDA_LIBRARIES}
#        ${CUDNN_LIBRARIES}
#        ${TENSORRT_LIBRARIES}
)