#include <iostream>

// Question 2: Consider the following code. What will be the output ?
class MyClass {
    public:
        void myFunction(){
            std::cout << "Some content in parent class." << std::endl;
        }
};

class MyChild : public MyClass {};
class MyGrandChild : public MyChild {};

int main(int argc, char *argv[]){
    // Question 1: What is multilevel inheritance in C++ ?
    // Answer:
    // A class that is derived from another derived class

    // Answer to question 2
    MyGrandChild myObj;
    myObj.myFunction();

    // Question 3: Which of the following is an example of multilevel inheritance ?
    // Answer:
    // A class inheriting from a class that is itself derived from another class

    // Question 4: What are the benefits of multilevel inheritance ?
    // Answer:
    // Code reusability and access to methods from multilevel levels
    
    return 0;
}