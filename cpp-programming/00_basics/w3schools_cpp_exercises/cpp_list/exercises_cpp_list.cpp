#include <iostream>
#include <list>
#include <string>

int main(){

    // Exercise 1: What is a major difference between a list and a vector in C++ ?
    // Answer:
    // Elements can be added or removed from both ends of a list, but a vector is
    // optimized for adding/removing at the end

    // Exercise 2: How would you create a list called cars to store strings ?
    // Answer:
    std::list <std::string> cars;

    // Exercise 3: Which function retrieves the first element of a list ?
    // Answer:
    // front()

    // Exercise 4: Consider the following code. What does it do ?
    cars.push_back("Tesla");
    std::cout << "First element of cars : " << cars.front() << std::endl;
    // Answer:
    // Adds an element to the end of the list

    // Exercise 5: Which function would you use to remove the first element of a list ?
    // Answer:
    // pop_front()

    // Exercise 6: True or False:
    // You can access elements in a list by index, just like in a vector.
    // Answer:
    // False

    // Exercise 7: What will the following code output ?
    cars = {"Volvo", "BMW", "Ford"};
    cars.push_front("Tesla7");
    std::cout << "Fist element of cars : " << cars.front() << std::endl;
    // Answer:
    // Tesla
    return 0;
}