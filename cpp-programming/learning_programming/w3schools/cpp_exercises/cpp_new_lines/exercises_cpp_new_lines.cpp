#include <iostream>

int main(int argc, char *argv[]){

    //Question 1 : which character can be used to insert a new line in your output
    // Answer : \n

    // Question 2 : Insert a new line after "Hello World", by using a special character
    std::cout << "Hello World! \n";
    std::cout << "I am learning C++" << std::endl;

    // Question 3 : what is the output of the following code
    std::cout << 3;
    std::cout << 6;
    std::cout << std::endl;
    // Answer : 36

    // Question 4 : what is the output of the following code
    std::cout << 3 << "\n";
    std::cout << 6;
    std::cout << std::endl;
    //Answer : 
    // 3
    // 6

    // Question 5 : You can also insert a new line in your output with:
    // Answer : endl
    return 0;
}