#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keyword to create an inner loop inside the outer loop.
    // Answer :
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 2; j++){
            // code
        }
    }

    // Question 2 : What is a nested loop ?
    // Answer :
    // A loop inside another loop

    // Question 3 : How many times will the inner loop execute in the following code ?
    for(int i = 1; i <= 3; ++i){
        for(int j = 1; j <= 2; ++j){
            // code
        }
    }
    // Answer : 6 times

    // Question 4 : In a nested loop, the outer loop completes all its iterations before the inner loop runs.
    // Answer :
    // False.

    // Question 5 : What will be the output of this code ?
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= 3; j++){
            std::cout << i*j << " ";
        }
    }
    std::cout << std::endl;
    // Answer : 1 2 3 2 4 6
    return 0;
}