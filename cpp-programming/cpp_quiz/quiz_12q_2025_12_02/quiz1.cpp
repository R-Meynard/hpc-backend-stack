#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : 
    int a = 5;
    std::cout << " " << ++a << std::endl; // What is the output ?
    // Answer : 6

    // Question 2 :
    // On peut assigner un int * à un const int*
    int testValue = 20;
    int* value = &testValue;
    const int* value2 = value;
    std::cout << "Value2 : " << *value2 << std::endl;
    return 0;
}