#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correcct keyword to start an if statement.
    // Answer :
    int x = 10;
    if(x > 5){
        std::cout << "x is greater than 5" << std::endl;
    }

    // Question 2 : Drag and drop the correct comparison operator so the condition is true when age is exactly 18.
    // Answer :
    int age  = 18;
    if (age == 18){
        std::cout << "You are an adult."<< std::endl;
    }

    // Question 3 : True of False:
    // The condition in an if statement must be written in uppercase (e.g., IF)
    // Answer :
    // False

    // Question 4 : Print " Hello World" if x is greater than y
    int x1 = 50;
    int y1 = 10;
    if(x1 > y1){
        std::cout <<"Hello World" << std::endl;
    }

    // Question 5 : Print "Hello World" if x is equal to y.
    int x2 = 50;
    int y2 = 50;
    if(x2 == y2){
        std::cout << "Hello World!" << std::endl;
    }
    return 0; 
}