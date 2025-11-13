#include <iostream>
#include <string>

int main(int argc, char* argv[]){

    // Question 1 : Drag adn drop the correct index to print the second character of myString.
    // Answer :
    std::string myString = "Hello";
    std::cout << "The second element of myString is : " << myString[1] << std::endl;
    // 1

    // Question 2 : Drag and drop the correct function to access the second character of myString.
    std::string myString1 = "Hello";
    std::cout << "The second element of myString is : " << myString1.at(1) << std::endl;
    // Answer :
    // at()

    // Question 3 : How can you access the third character of a string named myString
    // Answer :
    // myString[2]

    // Question 4 : What will be the output of the following code 
    std::string myString2 = "Hello";
    std::cout << "The second element of myString is : " << myString2[1] << std::endl;
    // Answer :
    // e

    // Question 5 : Which function can be used to access a character at a specific index in a string 
    // Answer :
    // at()

    // Question 6 : Access the first character (H) in myString and print the result :
    // Answer :
    std::string myString3 = "Hello";
    std::cout << "The first element of myString is : " << myString3[0] << std::endl;

    // Question 7 : Change the first character (H) in myString to 'J'
    // Answer :
    std::string myString4 = "Hello";
    myString4[0] = 'J';
    std::cout << "The value of myString4 is : " << myString4 << std::endl;
    return 0;
}