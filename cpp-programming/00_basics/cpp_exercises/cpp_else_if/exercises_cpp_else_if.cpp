#include <iostream>

int main(int atgc, char *argv[]){

    // Question 1 : Drag an drop the correct keyword to add a new condition after the if statement.
    // Answer :
    int time = 14;
    if (time < 12){
        std::cout << "Good morning." << std::endl;
    }else if(time < 18){
        std::cout << "Good afternoon"<< std::endl;
    } else {
        std::cout << "Good evening." << std::endl;
    }

    // Question 2 : Drag and drop the correct keyword to check a second condition when the first one is false.
    // Answer :
    int score = 85;
    if (score >= 90){
        std::cout << "A" << std::endl;
    } else if(score >= 80 ){
        std::cout << "B" << std::endl;
    } else {
        std::cout << "C" << std::endl;
    }

    // Question 3 : What does the else if statement do ?
    // Answer :
    // Specifies a new condition if the first condition is false.

    // Question 4 : Print "1" if x is equal to y, print "2" if x is greater than y, otherwise print "3".
    int x4 = 50;
    int y4 = 50;
    if (x4 == y4){
        std::cout << "1" << std::endl;
    }else if(x4 > y4){
        std::cout << "2" << std::endl;
    }else {
        std::cout << "3" << std::endl;
    }

    // Question 5 : True or False:
    // You can have multiple else if statements in a program.
    // True
    return 0;
}