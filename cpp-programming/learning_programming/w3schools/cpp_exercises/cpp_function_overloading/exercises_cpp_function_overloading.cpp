#include <iostream>
#include <string>

// Question 1 : Drag and drop the correct argument to call the overloaded
// function that greets by name.

void greet(){
    std::cout <<"Hello, Guest !" << std::endl;
}

void greet(std::string name){
    std::cout << "Hello, " << name << " ! " << std::endl;
}

int main(int argc, char *argv[]){
    // Answer of the question 1:
    greet("Jenny");

    // Question 2 : What is function, overloading in C++ ?
    // Answer :
    // Function overloading in C++ is creating multiple functions with the same name but different parameters.

    // Question 3 : True or False:
    // Multiple functions can have teh same name as long as the number and/or 
    // type of parameters are different.
    // Answer :
    // True

    // Question 4 : Which syntax correctly overloads a function named add to accept two integers and two doubles ?
    // Answer :
    // int add(int a, int b);
    // double add(double a, double b);
    return 0;
}