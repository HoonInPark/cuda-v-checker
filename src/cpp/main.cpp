//
// Created by changjoon-lee on 1/5/26.
//

#include <iostream>
#include <cuda_runtime.h>
#include <cudnn.h>
#include "NvInfer.h"

int main() {
  int deviceCount = 0;
  cudaError_t error = cudaGetDeviceCount(&deviceCount);

  if (error != cudaSuccess) {
    std::cerr << "CUDA lib load FAILED : " << cudaGetErrorString(error)
              << std::endl;
    return 1;
  }

  std::cout << "CUDA lib load SUCCESS!" << std::endl;
  std::cout << "Device count : " << deviceCount << std::endl;

  if (deviceCount > 0) {
    cudaDeviceProp prop;
    cudaGetDeviceProperties(&prop, 0);
    std::cout << "GPU name : " << prop.name << std::endl;
    std::cout << "CUDA Compute Capability: " << prop.major << "." << prop.minor
              << std::endl;
  }

  return 0;
}
