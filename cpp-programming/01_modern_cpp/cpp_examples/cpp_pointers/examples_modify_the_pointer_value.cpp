#include <iostream>
#include <string>

int main (int argc, char *argv[]){

    std::string food = "Pizza";
    std::string* ptr = &food;
    // Output the original value of food
    std::cout << "Original food value : " << food << std::endl;

    // Output the memory address of food :
    std::cout << "Memory address of food (&food) : " << &food << std::endl;

    // Access the memory addresss of food and output its value
    std::cout << "Value at the address stored in ptr (*ptr) : "<< *ptr << std::endl;

    // Change the value of the pointer ptr
    *ptr = "Hamburger";

    // Output the new value of the pointer ptr
    std::cout << "New value of the pointer ptr after modifcation (*ptr) : " << *ptr << std::endl;
    
    // Output the new value of the food variable after modifying ptr
    std::cout << "New value of food after modifying ptr : " << food << std::endl;
    return 0;
}