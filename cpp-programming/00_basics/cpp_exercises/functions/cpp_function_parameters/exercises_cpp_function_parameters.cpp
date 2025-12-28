#include <iostream>
#include <string>

// Question 1 : Drag and drop the correct parameter name to complete the function definition.
void greet (std::string name){
    std::cout << "Hello " << name << " ! " << std::endl;
}

// Question 3 : Add a fname parameter of type string to myFunction.
void myFunction(std::string fname){
    std::cout  << fname << " Doe" << std::endl;
}

int main(int argc, char *argv[]){
    greet("Milana");
    greet("Emeraude");
    greet("Rubie");
    greet("Clement");

    // Question 2 : What is a parameter in a C++ function ?
    // Answer :
    // A variable inside the function that receives data

    // Question 3 : Add a fname parameter of type string to myFunction.
    myFunction("John");

    // Question 4 : True or False:
    // Multiple parameters can be added to a function by separating them with commas.
    // Answer :
    // True

    // Question 5 : Which of the following correctly declares a function with two parameters ?
    // Answer :
    // void myFunction(std::string name, int age)) {// code}

    // Question 6 : What will be the output of myFunction("Alice"); if myFunction takes
    // fname as a parameter and prints fname + " Doe " ?
    // Answer : 
    // Alice Doe
    return 0;
}