#include <iostream>
#include <array>

// Question 1 : Drag and drop the correct parameter so the function accepts an integer array
// with exactly 5 elements.
void printFive(int array[5]){
    for(int i = 0; i < 5; i++){
        std::cout << "Element : " << array[i] << std::endl;
    }
}

// Question 4 : What will the following code output ?
void myFunction(int myNumbers[3]){
    for(int i = 0; i < 3; i++){
        std::cout << "Number " << i << " : " << myNumbers[i] << std::endl;
    }
}
int main(int argc, char *argv[]){   
    // Answer of the question 1
    int myArray[5] = {10, 20, 30, 40, 50};
    printFive(myArray);

    // Question 2 : True or False:
    // When passing an array to a fonction, chnages to the array in the function
    // affect the original array.
    // Answer :
    // True

    // Question 3 : Which sytntax correctly defines a function taking an integer array with 5
    // elements ?
    // Answer :
    // void myFunction(int numVar[5])

    // Answer of the question 4
    std::cout << "" << std::endl;
    int myNumbers[3] = {5, 10, 15};
    myFunction(myNumbers);
    return 0;
}