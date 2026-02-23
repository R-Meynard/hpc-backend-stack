#include <iostream>
#include <string>
#include <omp.h>
#include <cublas_v2.h>

int main(int argc, char *argv[]){

   

    // Question 1 : Drag and drop the correct keyword to define an integer member named age in the structure.
    // Answer :
    struct Person {
        /* data */
        std::string name;
        int age;
    };

    // Question 2 : Drag and drop the correct member name to store the value 25 in p1.
    Person p1;
    p1.age = 25;
    std::cout << "p1.age = " << p1.age << std::endl;
    
    // Question 3 : What is a structure (or struct) in C++ ?
    // Answer :
    // A way to group related variables of different data types.

    // Question 4 : True or False:
    // Structures in C++ can contain vairables of different data types.
    // Answer : 
    // True.

    // Question 5 : Which syntax correctly acccesses a structure member ?
    // Answer : 
    // myStructure.myNum

    // Question 6 : Fill in the blanks to declare a structure named "car".
    // Answer :
    struct car {
        /* data */
        std::string brand;
        std::string model;
        int year;
    };

    return 0;
}