#include <iostream>
#include <vector>
#include <string>

int main(){
    // Exercise 1: What is the main difference between an array and a vector in C++ ?
    // Answer:
    // Vectors can grow or shrink in size, but arrays cannot

    // Exercise 2: Which header file is needed to use vectors in C++ ?
    // Answer:
    // vector

    // Exercise 3: How would you create a vector called cars to store strings ?
    // Answer:
    // vector<string> cars;

    // Exercise 4: which function adds an element to the end of a vector ?
    // Answer: 
    // push_back()

    // Exercise 5: Consider the following code. What does it do ?
    // cars.pop_back();
    // Answer:
    // Removes the last element of the vector

    // Exercise 6: How do you find out how many elements a vector has ?
    // Answer:
    // size()

    // Exercise 7: Which function checks if a vector is empty ?
    // Answer:
    // clear() : wrong answer
    // empty() : good answer

    // Exercise 8: What will the following code output ?
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford"};
    cars.push_back("Tesla");
    std::cout << "Size of the cars vector is : " << cars.size() << std::endl; 
    // Answer:
    // 4
    return 0;
}