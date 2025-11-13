#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keyword to start a loop that runs while the condition is true.
    // Answer :
    int i = 0;
    while(i < 5){
        std::cout << "i = "<< i << std::endl;
        i++;
    }

    // Question 2 : What is the purpose of a while loop ?
    // Answer :
    // To respect a block of code as long as a condition is true.

    // Question 3 : Print i as long as i is less than 6.
    // Answer :
    std::cout << std::endl;
    int i1 = 1;
    while (i1 < 6){
        std::cout << "i1 = " << i1 << std::endl;
        i1++;
    }

    // Question 4 : True or False.
    // A while loop will stop running once the condition is false.
    // Answer :
    // True.

    // Question 5 : What will be the output of this code ?
    std::cout << std::endl;
    int i2 = 0;
    while(i2 < 3){
        std::cout <<"i2 = " << i2 << ""<< std::endl;
        i2++;
    }
    // Answer :
    // 0 1 2 

    // Question 6 : How would you describe the following loop ?
    std::cout << std::endl;
    int x6 = 5;
    while (x6 > 0){
        std::cout <<"x6 = "<< x6-- << "" << std::endl;
    }
    // Answer : 
    // Counts down from 5 to 1
    return 0;
}