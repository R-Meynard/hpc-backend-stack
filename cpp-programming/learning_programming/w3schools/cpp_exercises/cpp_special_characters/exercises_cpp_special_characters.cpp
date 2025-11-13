#include <iostream>
#include <string>

int main(int argc, char *argv[]){

    // Question 1 : Which escape character can be used to include double quotes within a string
    // Answer : 
    std::string testString = "Bonjour \'J\' ";
    std::cout << "The value of testString is : " << testString << std::endl;
    std::string txt = "We are the so-called \"Vikings\" from the north.";
    std::cout << "The value of txt is : " << txt << std::endl;
    // \"

    // Question 2 : What will be the output of the following code
    std::string txt1 = "It\'s alright.";
    std::cout << "The value of txt : " << txt1 << std::endl;

    // Question 3 : True or False :
    // The escape character \n inserts a new line in a string.
    // Answer :
    // True

    // Question 4 : Which of the following would you use to include a backslash in a string 
    // Answer :
    std::string txt3 = "We are the so-called \\Vikings from the north.";
    std::cout << "The value of txt is : " << txt3 << std::endl;
    
    return 0;
}