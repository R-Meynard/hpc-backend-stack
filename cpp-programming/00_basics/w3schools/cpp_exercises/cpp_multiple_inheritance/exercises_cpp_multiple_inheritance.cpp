#include <iostream>

// Question 4
class MyOtherClass{
    public:
        void myOtherFunction() { std::cout << "Other content." << std::endl;}
};

class MyChildClass : public MyOtherClass {};

int main(int argc, char *argv[]){

    // Question 1: What is multiple inheritance in C++ ?
    // Answer:
    // A class that inherits from more than one base class

    // Question 2: How do you specify multiple inheritance in C++ ?
    // Answer:
    // Using a comma-sperated list of base classes

    // Question 3: True or False:
    // In multiple inheritance, a derivated class can inherit methods from more than
    // one base class.
    // Answer:
    // True

    // Question 4: In the following code, what will the line myObj.myOtherFunction(); 
    // output ?
    // Answer:
    MyChildClass myObj;
    myObj.myOtherFunction();
    // Other content.
    return 0;
}