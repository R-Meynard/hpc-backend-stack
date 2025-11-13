#include <iostream>
#include <string>

int main(int argc, char *argv[]){

    // Question 1 : What will be the result of the following code 
    // Answer :
    int x = 10;
    int y = 5;
    int z = x + y;
    std::cout <<"Value of z is : " << z << std::endl;
    // Answer : 
    // 15

    // Question 2 : Drag and drop the correct operator to add two integers.
    int x1 = 10;
    int y1 = 5;
    int z1 = x1 + y1;
    std::cout << "The value of z1 is : " << z1 << std::endl;

    // Question 3 : Drag and droop the correct operator to concatenate two strings.
    std::string x3 = "10";
    std::string y3 = "20";
    std::string z3 = x3 + y3;
    std::cout << "The value of z3 is : " << z3 << std::endl;

    // Question 4 : What will be the result of the following code 
    std::string x4 = "10";
    std::string y4 = "20";
    std::string z4 = x4 + y4;
    std::cout << "The value of z4 is : " << z4 << std::endl;
    // Answer : 
    // 1020

    // Question 5 : which of the following will cause an error 
    // Answer : 
    std::string s = "100";
    int n = 50;
    // string result = s + n // it is nt correct 

    return 0;
}