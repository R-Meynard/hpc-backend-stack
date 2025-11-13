#include <iostream>

int main (int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keyword to automatically detect the type of a variable based on its value.
    // Answer :
    auto myNum = 5;
    std::cout <<"The number is : "<< myNum << std::endl;

    // Question 2 : Drag and drop the correct keyword to declare a variable using automatic type deduction.
    // Answer :
    auto myText = std::string("Hello");
    std::cout << "The text is : " << myText << std::endl;

    // Question 3 : True or False 
    // auto can be used without assigning a value at the same time.
    // Answer :
    // False

    // Question 4 : What is the type of x in the following code ?
    // auto x = 5;
    // Answer :
    // int

    // Question 5 : What will happen in the following code ?
    auto x = 5; // int
    x = 9.99; 
    std::cout << "The new value of x : "<< x << std::endl;
    // Answer :
    // It will cause a compile error

    return 0;
}