#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keyword to create a loop that runs exactly 5 times.
    // Answer :
    for(int i = 1; i <= 5; i++){
        std::cout << "i = "<< i << std::endl;
    }
    std::cout << std::endl;

    // Question 2 : When is a for loop preferred over a while loop ?
    // Answer :
    // When you know exactly how many times you want to loop.

    // Question 3 : Use a for loop to print "Yes" 5 times:
    // Answer :
    for(int i = 0; i < 5; i++){
        std::cout << "Yes" << std::endl;
    }
    std::cout << std::endl;

    // Question 4 : Consider the following code:
    /*
        for(statement 1; statement 2; statement 3){
            // code block to be executed
        }
    */ 
    // What happens in statement 1 ?
    // Answer :
    // Statement 1 is executed once before the loop starts

    // Question 5 : What will be the output of this code ?
    for(int i = 0; i < 3; i++){
        std::cout << "i = "<< ""<< std::endl;
    }
    std::cout << std::endl;
    // Answer : 0 1 2
    return 0;
}