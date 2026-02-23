#include <iostream>

int main(){
    // Exercise 1:  What is the purpose of exception handling in C++ ?
    // Answer :
    // To handle errors and execute code when an error occurs

    // Exercise 2: Which keywords are used for exception handling in C++ ?
    // Answer:
    // try, throw, catch

    // Exercise 3: Consider the following code. What will be the output ?
    try {
        int age = 15;
        if (age >= 18) {
            std::cout << "Access granted - you are old enough.";
        }else {
            throw (age);
        }
    }
    catch (int myNum){
        std ::cout << "Access denied - You must be at least 18 years old.";
        std::cout << "Age is: " << myNum << std::endl;
    }
    // Answer:
    // Access denied - You must be at least 18 years old. Age is : 15.

    // Exercise 4: What does the throw keyword do in exception handling ?
    // Answer:
    // Throws an excepton to be caught by a catch block

    // Exercise 5: True or False
    // In a try-catch block, if no error occurs in the try block, the catch block is skipped.
    // Answer:
    // True 

    // Exercise 6: What is the purpose of the 'three dats' (...) in a catch block ?
    // Answer:
    // To handle any type of exception
    
    // Exercise 7: In exception handling, what is the role of the catch block ?
    // Answer:
    // To handle errors after an exception is thrown
    return 0;
}