#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct operator to assign the value 10 to x.
    // Answer :
    int x = 10;
    std::cout <<"Value of x : "<< x << std::endl;

    // Question 2 : Drag and drop teh correct compound assignment operator so that y is multiplied by 3.
    // Answer :
    int y = 7;
    y *= 3;
    std::cout << "Value of y : "<< y << std::endl;

    // Question 3 : Which operator is used to assign a value to a variable ?
    // Answer :
    // =

    // Question 4 : Use the addition assignment operator to add the value 5 to the variable x.
    // Answer :
    int x4 = 10;
    x4 += 5;
    std::cout << "Value of x4 : " << x4 << std::endl;

    // Question 5 : True or False
    // x %= 3; is equivalent to x = x % 3;
    // Answer : 
    // True
    int x5 = 75;
    x5 %= 3;
    int y5 = 75;
    y5 = y5 % 3;
    std::cout <<"Value of x5 : " << x5 <<", and value of y5 :" << y5 << std::endl;
}