#include <iostream>

// Question 1:  Drag and drop th ecorrect argument so the function calls itself with a value
// decreased by one.
void countdown(int n ){
    if(n > 0){
        std::cout <<"Value of n is " << n << std::endl;
        countdown(n-1);
    }
}
int main(int argc, char *argv[]){
    // Answer to question 1
    int start = 5;
    countdown(start);
    std::cout << std::endl;

    // Question 2 : What is recursion in C++ ?
    // Answer :
    // Recursion in C++ i sa programming technique where a function calls itself in order to solve a problem.

    // Question 3 : Why is recursion useful in programming ?
    // Answer :
    // Recursion is useful in programming because it allows you to solve complex problems by breaking them down into smaller, more manageable subproblems.

    // Question 4 : True or False:
    // When written correctly, recursion can be a very efficient and mathematically-elegant approach to programming.
    // Answer :
    // True
    return 0;
}