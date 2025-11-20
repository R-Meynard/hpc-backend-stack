#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keyword to allocate memory for an integer.
    int *ptrInt = new int;
    *ptrInt = 78;
    std::cout << "Value of integer allocated using new : " << *ptrInt << std::endl;
    delete ptrInt;

    // Question 2 : What will be the output of the following code ?
    int* ptr = new int;
    *ptr = 50;
    std::cout << "Value pointed to by ptr : " << *ptr << std::endl;
    // Answer :
    // 50
    delete ptr;

    // Question 3 : Drag and drop the correct keyword.
    // The keyword used to free memory that was allocated with new is delete.
    double *ptrDouble = new double;
    *ptrDouble = 12.5;
    std::cout << "Value of double allocated using new : " << *ptrDouble << std::endl;
    delete ptrDouble;

    // Question 4 : Truie or False:
    // If you forget to delete memory allocted with new, it can cause a memory leak.
    // Answer :
    // True.

    // Question 5 : What does the following code do ?
    char *ptrChar = new char;
    *ptrChar = 'A';
    std::cout << "Value of char allocated using new : " << *ptrChar << std::endl;
    delete ptrChar;
    // Answer : 
    // Allocated memory for a char, stores the value 'A' in it, prints the value and deletes the allocated memory. 
    return 0;
}