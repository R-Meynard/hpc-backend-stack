#include <iostream>
#include <string>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct function to append "World" to greeting.
    // Answer :
    std::string greeting = "Hello";
    greeting.append("World");
    std::cout <<"The content of the greeting variable : "<< greeting << std::endl;
    
    // Question 2 : Which operator can be used to concatenate two strings
    // Answer :
    // + 

    // Question 3 : What will be the output of the following code 
    std::string firstName = "John";
    std::string lastName = "Doe";
    std::string fullName = firstName + " " + lastName;
    std::cout << "The fullName is : " << fullName << std::endl;
    // Answer :
    // John Doe

    // Question 4 : Use the correct operator to concatenate two strings
    std::string firstName1 = "John";
    std::string lastName1 = "Doe";
    std::cout << "Concatenation of firstName1 and lastName1 : " << firstName1 + lastName1 << std::endl;

    // Question 5 : True or False
    // The append() function and the + operator can both be used to concatenate
    // strings.
    // Answer :
    // True
    return 0;
}