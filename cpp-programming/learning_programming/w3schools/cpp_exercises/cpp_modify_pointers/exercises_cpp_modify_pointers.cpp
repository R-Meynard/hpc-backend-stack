#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : What happends if you change the value of a variable through a pointer ?
    // Answer :
    // The original variable's value also changes.

    // Question 2 : Fill in the blanks to change the value of the pointer to "Cake".
    std::string food = "Pizza";
    std::string* ptr = &food;
    *ptr = "Cake";
    std::cout << "Value of food after changing the value through pointer ptr : " << food << std::endl;

    // Question 3 : True or False:
    // To change the value of a pointer, you must include the <mod_ptr> library.
    // Answer :
    // False. You do not need to include any special library to change the value of a pointer.
    return 0;
}