#include <iostream>

int main(){
    // write age here
    int age = 35;
    // Use an if statement with the >= operator to check if age is 18 or older
    if(age >= 18){
        std::cout << "Allowed" << std::endl;
    } else {
        std::cout << "Not Allowed" << std::endl;
    }
    return 0;
}