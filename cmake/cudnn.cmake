# --- CUDNN ---
find_package(CUDNN)

message(STATUS "CUDNN Version: ${CUDNN_VERSION}")

target_include_directories(cuda-v-checker PRIVATE
)

target_link_libraries(cuda-v-checker PRIVATE
)