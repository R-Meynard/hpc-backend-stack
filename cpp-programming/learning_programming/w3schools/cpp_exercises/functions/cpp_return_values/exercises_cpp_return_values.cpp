#include <iostream>

// Question 1: Drag and drop the correct return type to declare a function that retutrns an integer.
int addFive(int x){
    return 5 + x;
}

int myFunction(int x){
    return 5 + x;
}

int main(int argc, char *argv[]){
    int resullt1 = addFive(10);
    std::cout << "10 + 5 = " << resullt1 << std::endl;

    // Question 2: Drag and drop the correct function name to call the function above with the
    // value 4.
    std::cout << "addFive(4) = " << addFive(4) << std::endl;

    // Question 3 : What does the void keyword indicate in a function ?
    // Answer :
    // The function does not return a value.

    // Question 4 : True or False:
    // A function can return a value by using the return keyword with the data
    // type specified.
    // Answer :
    // True.

    // Question 5 : Insert the missing part to print the number 8 in main, by using a specific 
    // keyword inside myFunction:
    std::cout << "myFunctrion(3) = " << myFunction(3) << std::endl;

    // Question 6 : How would you declare a function that returns an integer ?
    // Answer :
    // int myFunction(int x) {// code}

    // Question 7 : What is the output of cout << myFunction(4);
    // if myFunction(int x) returns 5 + x ?
    // Answer :
    // 9 
  return 0;
}