#include <iostream>

void changeValue(int &num){
    num = 100;
}

int main(int argc, char* argv[]){

    // Question 1
    int value = 50;
    changeValue(value);
    std::cout << "The changed value is : " << value << std::endl;

    // Question 2 : True or False:
    // Passing a variable by reference allows a function to modify its original value.
    // Anwer : 
    // True

    // Question 3 : Which syntax correctly passes an integer by reference ?
    // Answer :
    // void myFunction(int &x)

    // Question 4 : Which syntaxe correctly passes a string by reference ?
    // Answer :
    // void modifyString(std::string &str)
    return 0;
}