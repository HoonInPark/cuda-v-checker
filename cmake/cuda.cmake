# --- CUDA ---
find_package(CUDAToolkit REQUIRED)

message(STATUS "CUDA Toolkit Version: ${CUDAToolkit_VERSION}")

target_include_directories(cuda-v-checker PRIVATE
)

target_link_libraries(cuda-v-checker PRIVATE
        CUDA::cudart
)