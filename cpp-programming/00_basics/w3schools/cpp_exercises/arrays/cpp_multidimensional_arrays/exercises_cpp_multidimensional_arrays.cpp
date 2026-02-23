#include <iostream>
#include <string>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct indexes to access the element B.
    // Answer :
    std::string letters[2][2] = {
        {"A", "B"},
        {"C", "D"}
    };
    std::cout << "letters[0][1] = " << letters[0][1] << std::endl;

    // Question 2 : What is a mutli-dimensional array ?
    // Answer : 
    // An array of arrays

    // Question 3 : How would you declare a 2x4 array of strings ?
    // Answer : 
    std::string letters2[2][4];

    // Question 4 : True or False:
    // To access an element in a multi-dimensional array, specify an index for each dimension.
    // Answer :
    // True.

    // Question 5 : What will be the output of the following code ?
    // Answer :
    std::string letters3[2][2] = {
        {"A", "B"},
        {"C", "D"}
    };
    std::cout << "letters[1][1] = " << letters3[1][1] << std::endl;
    return 0;
}