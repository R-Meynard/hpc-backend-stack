#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keyword and type to make myNum a constant variable.
    // Answer :
    const int myNum = 15;
    std::cout << myNum << std::endl;

    // Question 2 : True or False :
    // The const keyword makes a variable unchangeable and read-only.
    // Answer :
    // True
    
    // Question 3 : What happens if you try to change a constant variable in C++ ?
    const int MyNum = 15;
    //myNum = 10;
    // Answer : 
    // Compile error

    // Question 4 : Which of the following is a correct way to declare a constant ?
    // Answer :
    const int minutesPerHour = 60;
    return 0;
}