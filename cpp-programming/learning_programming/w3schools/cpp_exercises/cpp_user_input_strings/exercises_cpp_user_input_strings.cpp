#include <iostream>
#include <string>

int main(int argc, char* argv[]){

    // Question 1 : Drag and drop the correct input object to store a single word in name.
    // Answer :
    std::string name;
    std::cout << "Give a name please : " << std::endl;
    std::cin >> name;
    std::cout << "Name chosen is : " << name << std::endl;

    // Question 2 : Drag and drop the correct function and input object to read a full line of text into fullName.
    // Answer : 
    std::string fullName;
    std::cout << "Please enter your name : \n";
    std::getline(std::cin, fullName);

    // Question 3 : True or False
    // The cin function can only store a single word
    std::string singleWord;
    std::cout << "Give a word : ";
    std::cin >> singleWord;
    std::cout << "The single word chosen is : " << singleWord << std::endl;
    // Answer :
    // True

    // Question 4 : Use the correct function to read a line of text which is put in by the user.
    std::string fullName1;
    std::cout << "Type your full name: ";
    std::getline(std::cin, fullName1);
    std::cout << "Your name is : "<< fullName1 << std::endl;

    // Question 5 : Which of these is the correct way to read a full line of user input 
    // Answer :
    // getline(cin , myString);
    return 0;
}