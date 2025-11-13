#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct variable name to access each element of the array inside the loop.
    // Answer :
    std::string cars[3] = {"Toyota", "Honda", "Ford"};
    for(int i = 0; i < 3; i++){
        std::cout << cars[i] << " ";
    }
    std::cout << std::endl;

    // Question 2 : How do you access the elements in an array using a for loop ?
    // Answer :
    // By using the array index inside square brackets.

    // Question 3 : What will be the output of the following code ?
    // Answer :
    std::string cars2[3] = {"Toyota", "Honda", "Ford"};
    for(int i = 0; i < 3; i++){
        std::cout << cars2[i] << " ";
    }
    std::cout << std::endl;

    // Question 4 : Loop through the elements in the cars array.
    // Answer :
    std::string cars3[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for(int i = 0; i < 4; i++){
        std::cout << cars3[i] << " ";
    }
    std::cout << std::endl;

    // Question 5 : Which of the following loops through an integer array using the for-each syntax ?
    // Answer :
    int myArray[3] = {12, 13 , 14};
    for (int x : myArray){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}