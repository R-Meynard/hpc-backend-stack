#include <iostream>
#include <string>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keyword to handle cases that are not matched.
    // Answer :
    int day = 1;
    switch (day)
    {
    case 1:
        std::cout << "Monday" << std::endl;
        /* code */
        break;
    
    default:
        std::cout << "Another day" << std::endl;
    }

    // Question 2 : What will be the output of this code if day1 = 2 ?
    // Answer : 
    int day1 = 2;
    switch (day1)
    {
    case 1:
        std::cout << "Monday" << std::endl;
        /* code */
        break;
    case 2 :
        std::cout << "Tuesday" << std::endl;
        break;
    default:
        std::cout << "Another day" << std::endl;
    }

    // Question 3 : Insert the missing parts to complete the foolowing switch statement.
    // Answer :
    int day3 = 2;
    switch (day)
    {
    case 1:
        std::cout << "Saturday" << std::endl;
        /* code */
        break;
    case 2:
        std::cout << "Sunday" << std::endl;
        break;
    }

    // Question 4 : Which keywords allows code to execute when no case matches in a switch statement ?
    // Answer :
    // default

    // Question 5 : Complete the swicth statement, and add the correct keyword at the end to specify some code
    // to run if there is no case match in the switch statement.
    // Answer :
    int day4 = 4;
    switch (day4)
    {
    case 1: 
        std::cout << "Saturday" << std::endl;
        break;
    case 2 :
        std::cout << "Sunday" << std::endl;
        break;
    default:
        std::cout << "Weekend" << std::endl;
    }
    return 0;
}