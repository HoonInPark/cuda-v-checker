# --- TensorRT ---
find_package(TensorRT)

message(STATUS "TensorRT Version: ${TensorRT_VERSION_STRING}")

target_include_directories(cuda-v-checker PRIVATE
)

target_link_libraries(cuda-v-checker PRIVATE
)