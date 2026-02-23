#include <iostream>
#include <functional> // Needed for std::function

// A function that takes another function as parameter
void myFunction(std::function<void()> func){
    func();
    func();
}

int main(int argc, char* argv[]){

    // Question 1 : Fill in the correct syntax to declare a basic lambda fucntion with
    // no parameters.

    auto message = [](){
        std::cout << "Hello World !" << std::endl;
    };

    // Call the lambda function
    message();

    // Question 2 : Complete the lambda so ti returns the sum of its two parameters
    auto add = [](int a, int b){
        return a + b;
    };
    // Answer to question 2
    std::cout << "Value of the sum of a and b : " << add(3,4) << std::endl;

    // Answer to question 3
    myFunction(message);

    // Question 3 : Fill in the blank so the lambda prints the loop variable
    for(int i = 1; i <= 3; i++){
        auto show = [i](){
            std::cout << "Number : " << i << std::endl;
        };

        show();
    }
    
    // Question 4 : what is the output ?
    auto addother = [](int a, int b){
        return a + b;
    };

    std::cout << "addother(3,4) = " << addother(3,4) << std::endl;

    // Question 5 : Drag and drop the correct symbol
    // To capture a variable x by reference, write : [&x]().

    // Question 6 : When is a lambda a good fit ?
    // Answer :
    // When you only need the function once and it's short
    return 0;
}