#include <iostream>

// Question 1 : Drag and drop the correct symbol used to assign a default value to country.
void myFunction(std::string country = "Norway"){
    std::cout << "I'm from " << country << std::endl;
}
int main(int argc, char *argv[]){
    myFunction();
    myFunction("Sweden");

    // Question 2 : What is a default parameter value in C++ ?
    // Answer :
    // A value assigned to a parameter if no argument is provided during the function call.
    
    // Question 3 : True or False:
    // If a function has a default parameter, you can call it without providing an 
    // argument for that parameter.
    // Answer :
    // True.

    // Question 4 : How do you declare a default parameter for a function myFunction with a
    // string parameter country ?
    // Answer :
    // void myFunction(std::string country = "Norway")) {// code}

    return 0;
}