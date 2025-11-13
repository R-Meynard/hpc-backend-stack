#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    // Question 1 : Drag and drop the correct type, input object, and operator to declare a string
    // and read it from the user.

    std::string name;
    std::cout << "Choose a name please" << std::endl;
    std::cin >> name;
    std::cout << "name : " << name << std::endl;

    // Question 2 : Which keyword can be used to get input in C++ ?
    // Answer :
    // cin

    // Question 3 : What operator is used with cin to read input ?
    // Answer :
    // >> (extraction operator)

    //Question 4 : Use the correct keyword to get user input, stored in the variable x :
    int x;
    std::cout << "Type a number: "<< std::endl;
    std::cin >> x;
    std::cout << "Value of x : "<< x << std::endl;

    // Question 5 : Fill in the missing parts to print the sum of two numbers (which is put in by the user):
    int x1, y1;
    int sum;
    std::cout << "Type a number: ";
    std::cin >> x1;
    std::cout << "Type another number: ";
    std::cin >> y1;
    sum = x1 + y1;
    std::cout << "Sum is : "<< sum << std::endl;
    return 0;
}