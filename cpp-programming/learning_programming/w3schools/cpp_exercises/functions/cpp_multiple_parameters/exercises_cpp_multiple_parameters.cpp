#include <iostream>
#include <string>

void myFunction(std::string fname, int age){
    std::cout << fname << " is " << age << " years old." << std::endl;
}

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct arguments (in order) to call myFunction with a string then an int.
    myFunction("Jennie", 22);

    // Question 2 : True or False:
    // A function can accept different types of parameters, such as string and int.
    // Answer :
    // True.

    // Question 3 : What must be true about the arguments in a function call with multiple parameters ?
    // Answer :
    // They must match the parameters in number and order.

    // Question 4 : Which line correctly calls a function myFunction with parameters string 
    // fname and int age ?
    // Answer :
    // myFunction("Liam", 3);

    return 0;
}