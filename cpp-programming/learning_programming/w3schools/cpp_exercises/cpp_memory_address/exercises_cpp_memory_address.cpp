#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct operator to print the memory address of x.
    int x = 5;
    std::cout << "Memory addressof x : " << &x << std::endl; // pritn memory address of x

    // Question 2 : What does the & operator return when used with a variable ?
    // Answer :
    // The memory address of the variable.

    // Question 3 : True or False:
    // The memory address of a variable is displayed in hexadecimal form.
    // Answer :
    // True.

    // Question 4 : Get the memory address of the food variable:
    std::string food = "Pizza";
    std::cout << "Memory address of food : " << &food << std::endl;

    // Question 5 : Why is it useful to knwo the memory address of a variable ?
    // Answer :
    // To manipulate daat directly in memory.
    return 0;
}