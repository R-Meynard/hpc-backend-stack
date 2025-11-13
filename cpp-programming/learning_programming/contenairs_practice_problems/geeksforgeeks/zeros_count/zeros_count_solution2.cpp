#include <iostream>
#include <vector>


int countZeros(const std::vector<int>& arr){
    int zeroCount = 0; // Initialize a counter for the zeros

    // Use a range-based for loop to iterate through each element of the array
    for(int num : arr){
        // Check if the current element is equal to 0
        if(num == 0){
            zeroCount++; // If it is, increment the counter
        }
    }
    // Return the final count
    return zeroCount;
}

int main(int argc, char *argv[]){

    // Example 1 : an array with multiple zeros
    std::vector<int> numbers1 = {1, 0, 5, 0, 8, 2, 0, 7};
    int count1 = countZeros(numbers1);
    std::cout << "The number of zeros in the first array is : " << count1 << std::endl;

    // Example 2 : an array with no zeros
    std::vector<int> numbers2 = {1, 2, 3, 4, 5};
    int count2 = countZeros(numbers2);
    std::cout << "The number of zeros in the second array is : " << count2 << std::endl;

    // Example 3 : an array with only zeros
    std::vector<int> numbers3 = {0, 0, 0};
    int count3 = countZeros(numbers3);
    std::cout << "The number of zeros in the third array is : " << count3 << std::endl;
    return 0;
}