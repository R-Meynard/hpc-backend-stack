#include <iostream>

// Question 3: In the following code, which class is allowed to access the 'salary' attribute ?
class Employee {
    protected:
        int salary;
};

class Manager : public Employee {
    public: 
        void setSalary(int s) { salary = s;}
};

int main(int argc, char *argv[]){

    // Question 1: What is the purpose of the protected access specifier in C++ ?
    // Answer: 
    // To allow access within the class and in derived classes

    // Question 2: True or False:
    // Protected members of a class can be accessed directly from outside the class.
    // Answer:
    // False

    // Answer to question 3
    // Both Employee and Manager classes
    return 0;
}