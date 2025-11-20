#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keyword to create an enum
    // Answer :
    enum DIRECTION {NORTH, EAST, SOUTH, WEST};

    // Question 2 : Drag and drop the correct enum name and ocnstant to assign MEDIUM to myVar
    // Answer :
    enum Level {LOW, MEDIUM, HIGH};
    Level myVar = MEDIUM;

    // Question 3 : What is an enum in C++ ?
    // Answer :
    // An enum is used to define a set of named integer constants.

    // Question 4 : True or False
    // The first value item in an enum has a default value of 0.
    // Answer : 
    // True.

    // Question 5 : Fill in the blanks to make sense of the code below:
    // Answer :
    enum Seasons {SPRING, SUMMER, FALL, WINTER};

    // Question 6 : What will be the output of the following code ?
    enum Level1 {LOW1 = 10, MEDIUM1, HIGH1};
    // Answer :
    std::cout << "LOW1 = " << LOW1<< std::endl;
    std::cout << "MEDIUM1 = " << MEDIUM1 << std::endl;
    std::cout << "HIGH1 = " << HIGH1 << std::endl;
    return 0;
}