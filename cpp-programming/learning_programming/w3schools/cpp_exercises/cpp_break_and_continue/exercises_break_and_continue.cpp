#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keyword to exit the loop immmediately when i is 3.
    // Answer : 
    for(int i = 0; i < 5; i++){
        if(i == 3){
            break;
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Question 2 : What does the break statement do in a loop ?
    // Answer : 
    // Exits the loop immediately

    // Question 3 : True or False:
    // The continue statement stops all remaining iterations in a loop.
    // Answer :
    // False.

    // Question 4 : Drag and drop the correct keyword to skip printing when i is 3 but continue the loop.
    // Answer :
    for(int i = 0; i < 5; i++){
        if(i == 3){
            continue;
        }
        std::cout << i << " "; 
    } 
    std::cout << std::endl;

    // Question 5 : Stop the loop if i is 5.
    // Answer : 
    for(int i = 0; i < 10; i++){
        if(i == 5){
            break;
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Question 6 : In the following loop, when the value is "4", jump directly to the next value.
    // Answer : 
    for(int i = 0; i < 10; i++){
        if(i == 4){
            continue;
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}