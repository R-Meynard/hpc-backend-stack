#include <iostream>
#include <cmath>
#include <cuda_runtime.h>

// Error checking macro
#define CUDA_CHECK(call) \
do { \
    cudaError_t error = call; \
    if (error != cudaSuccess) { \
        std::cerr << "CUDA error: " << cudaGetErrorString(error) << std::endl; \
        exit(EXIT_FAILURE); \
    } \
} while(0)

__global__ void vectorAddScalar(float* d_array, float scalar, int n) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    if (idx < n) {
        d_array[idx] += scalar;
    }
}

int main() {
    int n = 1024;
    float scalar = 5.0f;
    
    // Host memory allocation
    float* h_input = new float[n];
    float* h_output = new float[n];
    
    // Initialize input data
    for (int i = 0; i < n; i++) {
        h_input[i] = static_cast<float>(i);  // Values: 0, 1, 2, ..., n-1
    }
    
    // Device memory allocation
    float* d_array;
    CUDA_CHECK(cudaMalloc(&d_array, n * sizeof(float)));
    
    // Copy data from host to device
    CUDA_CHECK(cudaMemcpy(d_array, h_input, n * sizeof(float), cudaMemcpyHostToDevice));
    
    // Launch kernel
    int blockSize = 256;
    int numBlocks = (n + blockSize - 1) / blockSize;
    vectorAddScalar<<<numBlocks, blockSize>>>(d_array, scalar, n);
    
    // Check for kernel launch errors
    CUDA_CHECK(cudaGetLastError());
    
    // Wait for kernel to complete
    CUDA_CHECK(cudaDeviceSynchronize());
    
    // Copy results back to host
    CUDA_CHECK(cudaMemcpy(h_output, d_array, n * sizeof(float), cudaMemcpyDeviceToHost));
    
    // Display results
    std::cout << "Vector + Scalar Addition Results:" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    
    // Display first 10 elements
    std::cout << "First 10 elements:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << h_input[i] << " + " << scalar << " = " << h_output[i] << std::endl;
    }
    
    // Display last 10 elements
    std::cout << "\nLast 10 elements:" << std::endl;
    for (int i = n-10; i < n; i++) {
        std::cout << h_input[i] << " + " << scalar << " = " << h_output[i] << std::endl;
    }
    
    // Verify results
    bool correct = true;
    for (int i = 0; i < n; i++) {
        if (fabs(h_output[i] - (h_input[i] + scalar)) > 1e-5) {
            correct = false;
            std::cout << "Error at index " << i << ": " << h_output[i] << " != " << (h_input[i] + scalar) << std::endl;
            break;
        }
    }
    
    if (correct) {
        std::cout << "\n✅ All computations are correct!" << std::endl;
    } else {
        std::cout << "\n❌ Computation errors detected!" << std::endl;
    }
    
    // Free device memory
    CUDA_CHECK(cudaFree(d_array));
    
    // Free host memory
    delete[] h_input;
    delete[] h_output;
    
    return 0;
}