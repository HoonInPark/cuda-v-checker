//
// Created by changjoon-lee on 1/5/26.
//

#include <iostream>

// CUDA
#include <cuda_runtime.h>
// cuDNN
#include <cudnn.h>
// TensorRT
#include "NvInfer.h"

int main() {
  std::cout << "=== CUDA/cuDNN/TensorRT Test ===\n";

  // --- CUDA version ---
  int deviceCount = 0;
  cudaError_t cudaStatus = cudaGetDeviceCount(&deviceCount);
  if (cudaStatus != cudaSuccess) {
    std::cerr << "CUDA not found: " << cudaGetErrorString(cudaStatus) << "\n";
  } else {
    std::cout << "CUDA device count: " << deviceCount << "\n";
  }

  // --- cuDNN version ---
  size_t cudnnVersion = cudnnGetVersion();
  std::cout << "cuDNN version: " << cudnnVersion << "\n";

  // --- TensorRT version ---
  std::cout << "TensorRT version: " << NV_TENSORRT_MAJOR << "."
            << NV_TENSORRT_MINOR << "." << NV_TENSORRT_PATCH << "\n";

  std::cout << "Test completed successfully.\n";
  return 0;
}
