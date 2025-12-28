#include <iostream>
#include <string>

// Question 3 : What is the output of teh following ?
struct Car {
    std::string brand;
    int year;
};

void myFunction(Car c){
    std::cout <<"Brand: " << c.brand << ", Year : " << c.year << std::endl;
}

int main(int argc, char* argv[]){

    // Question 1 : Drag and drop the correct symbol.
    // To pass a structure by reference in a function parameter, use the & symbol.

    // Question 2 : What happens whenb a structure is passed by value to a fonction ?
    // Answer :
    // A copy is passed, so changes made inside teh function do not affect the original structure.

    // Answer of the question 3
    Car myCar = {"Toyota", 2020};
    myFunction(myCar);
    
    return 0;
}