#include <iostream>
#include <string>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct symbols to complet ethe ternary expression that 
    // prints Even when num is divisible by 2, otherwise Odd.
    // Answer :
    int num = 7;
    std::string result = (num % 2 == 0) ? "Even" : "Odd";
    std::cout << "Value of result : "<< result << std::endl;

    // Question 2 : What is the ternary operator .
    // Answer :
    // A short-hand way of writing if ..else statements

    // Question 3 : How many operands does the ternary operator consist of ?
    // Answer :
    // Three

    // Question 4 : Insert the missing parts to complete the following "short hand if...else statement" (ternary operator):
    int time = 20;
    std::string result1 = (time < 18) ? "Good day." : "Good evening.";
    std::cout <<"Value of result1 : " << result1 << std::endl;
    return 0;
}