#include <iostream>

int main(int argc, char *argv[]){

    // In C++, when you create a variable like int x = 10; who handles the memory allocation ?
    // Answer :
    // The C++ runtime environment handles memory allocation for variables.
    // The compiler automatically.

    // Question 2 : What is the output of the following code ?
    double myDouble;
    std::cout << "Sizeof(myDouble) : " << sizeof(myDouble) << std::endl;

    // Question 3 : True or False:
    // If your program uses too much memory or forgets to clean up unused
    // memory, it can lead to slow performance or even crashes.
    // Answer :
    // True.
    return 0;
}