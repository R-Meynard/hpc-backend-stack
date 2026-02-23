#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keyword to declare the type of i in this for-each loop.
    // Answer : 
    int values[3] = {10, 20, 30};
    for(int i : values){
        std::cout << i << " ";
    }
    std::cout << ::std::endl;
    // Autre solution :
    int values2[3] = {10, 20, 30};
    for(auto i : values2){
        std::cout << i << " ";
    }
    std::cout << ::std::endl;

    // Question 2 : What will be the output of the following code ?
    int values3[3] = {10, 20, 30};
    for(int i : values){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Question 3 : True or False.
    // You can use a for-each loop to loop through elements in a switch statement.
    // Answer : 
    // False.

    // Question 4 : Fill in the blanks to print the elements of myNumbers.
    int myNumbers[4] = {50, 30, 90, 133};
    for(int i : myNumbers){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}