#include <iostream>

int main(int argc, char* argv[]){

    // Question 1 : Drag and drop the correct keyword to specify a block of code to run if the if condition is false.
    // Answer :
    int time = 20;
    if(time < 18){
        std::cout << "Good day." << std::endl;
    }else {
        std::cout << "Good evening." << std::endl;
    }

    // Question 2 : Drag and drop the correct keyword so that "Fail" is printed when the condition in the if is false.
    // Answer :
    int score = 40;
    if(score >= 50){
        std::cout <<"Pass" << std::endl;
    }else {
        std::cout << "Fail" << std::endl;
    }

    // Question 3 : What does the else statement do ?
    // Answer :
    // Specifies a block of code to execute if the if condition is false.

    // Question 4 : What will be the output of the following code if time = 15 ?
    // Answer :
    time = 15;
    if(time < 18){
        std::cout << "Good day." << std::endl;
    }else {
        std::cout << "Good evening." << std::endl;
    }

    // Question 5 : True or False:
    // The else block is only executedif the if condition is true.
    // Answer :
    // False

    // Question 6 : Print "Yes" if x is equal to y, otherwise print "No".
    // Answer :
    int x6 = 50;
    int y6 = 50;
    if(x6 == y6){
        std::cout << "Yes"<<std::endl;
    }else {
        std::cout << "No" << std::endl;
    }
    return 0;
}