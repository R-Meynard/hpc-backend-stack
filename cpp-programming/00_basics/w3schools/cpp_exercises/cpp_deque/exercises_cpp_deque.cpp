#include <iostream>
#include <deque>

int main(){

    // Exercise 1: What is a major difference between a deque and a queue in C++ ?
    // Answer:
    // A deque allows elements to be added or removed from both ends, while a queue
    // only allows this from one end

    // Exercise 2: which header file is needed to use deques in C++ ?
    // Answer:
    // <deque>

    // Exercise 3: Which function adds an element to the beginning of a deque ?
    // Answer:
    // push_front()

    // Exercise 4: consider the following code. What will it output ?
    std::deque<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    std::cout << "First element of the cars deque : " << cars.front() << std::endl;
    // Answer:
    // Volvo

    // Exercise 5: Which function removes teh last element from a deque ?
    // Answer:
    // pop_back()

    // Exercise 6: True or False:
    // You can access elements in a deque by index, like with vectors.
    // Answer:
    // True

    // Exercise 7: What will the following code output after adding and removing elements ?
    cars.push_back("Volvo");
    cars.push_back("BMW");
    cars.push_back("Ford");
    cars.pop_front();
    std::cout << "The first element of the cars deque is : " << cars.front() << std::endl;
    // Answer:
    // BMW
    return 0;
}