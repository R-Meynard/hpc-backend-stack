#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct symbol to delcare a pointer to num.
    int num = 42;
    int *ptr = &num;
    std::cout << "Value of num using pointer : " << *ptr << std::endl;

    // Question 2 : Drag and drop the correct expression to print the value pointed to by ptr.
    int num2 = 58;
    int *ptr2 = &num2;
    std::cout << "Value of num2 using pointer : " << *ptr2 << std::endl;

    // Question 3 : What does a pointer store in C++ ?
    // Answer :
    // The memory address of another variable.

    // Question 4 : Create a pointer variable with the name ptr, that should point to a string 
    // variable named food.
    std::string food = "Pizza";
    std::string *ptr3 = &food;
    std::cout << "Value of food using pointer : " << *ptr3 << std::endl;

    // Question 5 : True or False:
    // The type of a pointer must match the type of the variable it points to.
    // Answer :
    // True.
    return 0;
}