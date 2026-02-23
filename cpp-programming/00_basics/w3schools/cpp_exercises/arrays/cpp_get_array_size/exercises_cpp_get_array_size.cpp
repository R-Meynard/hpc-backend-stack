#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct index to calculate the number of elements in the array.
    // Answer :
    int nums[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(nums) / sizeof(nums[0]);
    std::cout << "getArrayLength : " << getArrayLength << std::endl;

    // Question 2 : What does the sizeof() operator return when used on an array ?
    // Answer :
    // The size of the array in bytes.

    // Question 3 : True or False:
    // To find the number of elements in an array, you can divide teh array's size by the size of one element.
    // Answer :
    // True.

    // Question 4 : What will be teh result of this code ?
    int numbers[4] = {1, 2, 3, 4};
    std::cout << sizeof(numbers) << std::endl;

    // Question 5 : Which approach is more flexible for looping through an array of any size ?
    // Answer :
    // Using sizeof(array) / sizeof(array[0]) in the loop condition

    // Question 6 : Which approach is even more flexible and cleaner fro looping through arrays ?
    // Answer :
    // Using the 'for-each loop'
    return 0;
}