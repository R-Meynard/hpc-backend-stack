#include <iostream>
#include <random>

int main(){
    const int size_arrays = 10;
    int numbers[size_arrays];
    
    // Initialize random generator
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<int> distrib(1, 100); // Values between 1 and 100

    // Fill numbers
    for(int i = 0; i < size_arrays; i++){
        numbers[i] = distrib(gen);
    }

    // Display data of numbers
    for(int i = 0; i < size_arrays; i++){
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Print the integers of numbers in the reverse order
    std::cout << "Integers of numbers in the reverse order "<< std::endl;
    for(int i = size_arrays - 1; i >= 0; i--){
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}