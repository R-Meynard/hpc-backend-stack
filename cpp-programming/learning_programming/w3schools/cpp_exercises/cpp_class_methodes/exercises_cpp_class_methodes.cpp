#include <iostream>

// Question 3 : Consider the following code. What will be the output ?

class MyClass {
    public:
    void myMethod() {
        std::cout << "Hello from myMethod!" << std::endl;
    }
};

// Question 4 : Create a function nammed myMethod with no return value. Then Use myObj 
// to call myMethod inside main.
class MyClass2 {
    public:
    void myMethod() {
        std::cout << "Hello from myMethod!" << std::endl;
    }
};

// Question 6 : How would you call a method with parameters ? Consider the followiong code:
class Car{
    public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct operator.
    // To define a method outside a class in C++, you use the scope resolution operator (::) with the class name.

    // Question 2 : How can methods be defined in a C++ class ?
    // Answer :
    // Methods can be defined inside the class definition or outside the class using the scope resolution operator.

    // Answer to question 3
    MyClass myObj;
    myObj.myMethod();
    // Output : Hello from myMethod!

    // Answer to question 4
    MyClass2 myObj2;
    myObj2.myMethod();
    // Output : Hello from myMethod!

    // Question 5 : How is a method defined outside a class in C++ ?
    // Answer :
    // Using the :: operator with the class name.

    // Answer to question 6
    Car myObj3;
    std::cout << "Value of maxSpeed : " << myObj3.speed(200) << std::endl;
    return 0;
}