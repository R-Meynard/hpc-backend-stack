#include <iostream>

// Question 1 : Drag and drop the correct return type so this function takes no parameters and returns nothing.
void greet(){
    std::cout << "hello!" << std::endl;
}

void myFunction(){
    std::cout << "I just got executed !" << std::endl;
}

int main(int argc, char *argv[]){

    // Question 2 : Drag and drop the correct function call to execute the greet function.
    greet();

    // Question 3 : What is a function in C++ ?
    // Answer :
    // A block of code that runs only when it is called.

    // Question 4 : Create a function named myFunction and call it inside main().
    // Answer :
    myFunction();

    // Question 5 : Insert the missing part to call myFunction two times.
    // Answer :
    myFunction();
    myFunction();

    // Question 6 : Which syntax correctly declares a function that returns nothing and takes no parameters ?
    // Answer :
    /* void myFunction() {// code  } */
    return 0;
}