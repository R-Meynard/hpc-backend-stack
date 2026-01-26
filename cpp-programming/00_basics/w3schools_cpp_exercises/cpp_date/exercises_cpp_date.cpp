#include <iostream>
#include <ctime>

int main(){

    // Question 1 : Which library in C++ allows us to work with dates and times ?
    // Answer :
    // ctime

    // Question 2 : What is the purpose of the time() function ?
    time_t timestamp;
    time(&timestamp);
    std::cout << std::ctime(&timestamp) << std::endl;
    // Answer :
    // To retrieve a timestamp representing the current date and time

    // Question 3 : Which function is used to format a date into a specific string format ?
    // Answer :
    // ctime() // wrong answer
    // Correction
    // strftime()
    return 0;
}