#include <iostream>

class MyClass {
    public:
        int myNum;
};

int main(int argc, char* argv[]){

    // Question 1 : Drag and drop the correct term to complete the sentence
    // In C++, a class is like a blueprint for creating objects

    // Question 2 : What is the role of a class in C++ ?
    // Answer
    // To define a template or blueprint for creating objects

    // Question 3 : Create a class called MyClass
    // class MyClass

    // Question 4 : Create an object of MyClass called myObj
    MyClass myObj;

    // Question 5 :  How do you access attributes of an object in C++ ?
    // Using the dot (.) operator with the object name

    // Question 6 : True or False:
    // You can create multiple objects of one class
    // Answer :
    // True

    // Question 7 : Create an object of MyClass called myObj, and use it to set the value of
    // myNum to 15
    // Answer :
    MyClass myObj1;
    myObj1.myNum = 15;
    std::cout << "My num is : " << myObj1.myNum << std::endl;
    
    return 0;
}