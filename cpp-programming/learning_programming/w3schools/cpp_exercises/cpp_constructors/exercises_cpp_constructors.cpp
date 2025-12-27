#include <iostream>

// Question 4 : Create a constructor of MyClass , and call it :
class MyClass {
    public:
        MyClass(){
            std::cout << "Hello World !" << std::endl;
        }
};
int main(int argc, char* argv[]){
    // Question 1 : Drag and drop the correct term to complete the sentence.
    // Answer :
    // In C++, a constructor is defined using the class name followed by parentheses.

    // Question 2 : Drag and drop the correct operator.
    // Answer :
    // To define a constructor outside of a class, use the :: operator with the class name.

    // Question 3 : How do you define a constructor in C++ ?
    // Answer :
    // Using the class name followed by parentheses 

    // Answer to question 4
    MyClass myObj;

    // Question 5 : True or False
    // A constructor in C++ must always have a return type.
    // Answer :
    // False

    // Question 6 : How do you define a constructor outside of a class ?
    // Answer :
    // Using the :: operator with the class name
    return 0;
}