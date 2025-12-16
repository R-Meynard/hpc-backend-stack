#include <iostream>

// Question 1: Drag and drop the correct variable name to declare a local variable inside
// myFunction and print it.
void myFunction(){
    // Local variable
    int x = 10;
    std::cout << "Local variable x : " << x << std::endl;
}

// Question 2 : Drag and drop the correct variable name to access the global variable inside
// printScore.
int score = 100; // global variable.

void printScore(){
    std::cout << "Global variable score : " << score << std::endl;
}

// Question 4 ; In the following code example, what is x ?
void exampleFunction(){
    int x = 5;
    std::cout << "Value of x : " << x << std::endl;
}

int main(int argc, char* argv[]){
    // Answer to question 1
    myFunction();

    // Answer to question 2
    printScore();

    // Question 3 : What is a local variable in C++ ?
    // A local variable in C++  is a variable that can only be accessed within the function it was declared in.

    // Answer to question 4
    exampleFunction();

    // Question 5 : True or False:
    // A global variable can be accessed from within any function in C++.
    // Answer :
    // True

    // Question 6 : What is a key reason to prefer using local variables over global variables in C++ ?
    // Answer :
    // They make code easier toç maintain
    
    return 0;
}