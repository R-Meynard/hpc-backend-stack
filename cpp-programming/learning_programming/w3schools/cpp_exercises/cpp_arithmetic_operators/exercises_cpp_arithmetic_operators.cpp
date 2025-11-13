#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct operator to add x and y
    // Answer :
    int x = 5;
    int y = 3;
    int sum = x + y;
    std::cout << "Value of the sum : "<< sum << std::endl;

    // Question 2 : Drag and drop the correct comparison operator so the expression outputs 1 when a and b are equal.
    int a = 5;
    int b = 5;
    std::cout << "a == b ? : "  << (a == b) << std::endl;

    // Question 3 : Operators are used to :
    // Answer : 
    // Perform operations on variables and values

    //Question 4 : Multiply 10 and 5, and print the result.
    // Answer : 
    std::cout << "Value of 10 *5 : " << 10*5 << std::endl;

    // Question 5 : Divide 10 by 5, and print the result.
    // Answer :
    std::cout <<"Value of 10/5 : "<< 10/5 << std::endl;

    // Question 6 : Use the correct operator to increase the value of the variable x by 1.
    // Answer :
    int x6 = 10;
    ++x6;
    std::cout << "x6 : " << x6 << std::endl;
    int y6 = 10;
    y6++;
    std::cout << "y6 : " << y6 << std::endl;
}