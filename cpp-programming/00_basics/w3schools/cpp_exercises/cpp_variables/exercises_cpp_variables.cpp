#include <iostream>

int main(int argc, char *argv[]){
    
    // Question 1 : Drag and drop the correct data type to create a variable that stores an integer value
    // Answer :
    int myNum = 15;
    std::cout << myNum << std::endl;

    // Question 2 : drag and drop the correct variable name so the output is I am 35 years old.
    // Answer :
    int myAge = 35;
    std::cout << "I am "<< myAge << " years old." << std::endl;

    // Question 3 : Drag and drop the correct variable name to overwrite the value 15 with 10.
    // Answer :
    int myNum2 = 15;
    myNum2 = 10;
    std::cout << myNum2 << std::endl;

    // Question 4 : True or False
    // To create a variable in C++, you must specify the type first.
    // Answer : True

    // Question 5 : Create a variable named myNum and assign the value 50 to it.
    int myNum3 = 50;
    std::cout << myNum3 << std::endl;

    // Question 6 : Display the sum of 5 + 10, using two variables : x and y.
    int x = 5;
    int y = 10;
    std::cout << x + y << std::endl;
    return 0;
}