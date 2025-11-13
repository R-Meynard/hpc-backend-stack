#include <iostream>
#include <vector>

/**
 * @brief Computes the number of zeros in a vector of integers.
 *
 * This function iterates through each element of the provided vector
 * and uses a counter to keep track of how many elements are equal to zero.
 * The use of a const reference prevents the vector from being copied,
 * which is more efficient for larger arrays.
 *
 * @param arr The vector of integers to search. It is passed by const reference.
 * @return The total count of zeros found in the vector.
 */
int countZeros(const std::vector<int>& arr) {
    int zeroCount = 0; // Initialize a counter for the zeros.

    // Use a range-based for loop to iterate through each element of the array.
    for (int num : arr) {
        // Check if the current element is equal to 0.
        if (num == 0) {
            zeroCount++; // If it is, increment the counter.
        }
    }

    // Return the final count.
    return zeroCount;
}

int main() {
    // Example 1: An array with multiple zeros.
    std::vector<int> numbers1 = {1, 0, 5, 0, 8, 2, 0, 7};
    int count1 = countZeros(numbers1);
    std::cout << "The number of zeros in the first array is: " << count1 << std::endl;

    // Example 2: An array with no zeros.
    std::vector<int> numbers2 = {1, 2, 3, 4, 5};
    int count2 = countZeros(numbers2);
    std::cout << "The number of zeros in the second array is: " << count2 << std::endl;

    // Example 3: An array with only zeros.
    std::vector<int> numbers3 = {0, 0, 0};
    int count3 = countZeros(numbers3);
    std::cout << "The number of zeros in the third array is: " << count3 << std::endl;

    return 0;
}
