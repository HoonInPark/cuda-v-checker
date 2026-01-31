# What is it for?
It is for C++ projects, needed high performance TensorRT inference.
Such as realtime machine vision. 
Main problem to solve with this project is the issue that inference 
performance differs from GPU driver version of system and TensorRT version.
And also the issue that version compatilbility of TensorRT and other backend
libraries from NVIDIA.

# What it has?
- Find package from Linux system with `Find*.cmake`.
- Shows version of CUDA, CUDNN, TensorRT when its cmake is configured.
- Runs test code for CUDA, CUDNN, TensorRT. It has simple 3D algorithm and inference logic.