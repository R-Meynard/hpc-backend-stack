#include <iostream>

// Question 1: Drag and drop the correct keyword to declare a friend function
class Employee{
    private:
        int salary;
    
    public:
        Employee(int s) { salary = s;}
        friend void displaySalary(Employee emp);
};

int main(int argc, char *argv[]){
    // Question 2 : What is a friend fucntion in C++ ?
    // Answer :
    // A function that belongs to the class and is public : wrong
    // Correction : 
    // A non-member fucntion that can access the class's private data

    // Question 3 : Drag and drop the correct term.
    // A friend function can access a class's private members. 
    return 0;
}