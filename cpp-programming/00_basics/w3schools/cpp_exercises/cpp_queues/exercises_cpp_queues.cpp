#include <iostream>
#include <queue>

int main(){

    // Exercise 1: What is the order of element access in a queue ?
    // Answer:
    // FIFO (First In, First Out)

    // Exercise 2: How would you create a queue called cars to store strings ?
    // Answer:
    std::queue<std::string> cars;

    // Exercise 3: Which function is used to add an element to the end of a queue ?
    // Answer:
    // push()

    // Exercise 4: Consider the following code. What will it output ?
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    std::cout << "First element of the cars queue : " << cars.front() <<std ::endl;
    // Answer:
    // Volvo

    // Exercise 5: Which function removes teh front element from a queue ?
    // Answer:
    // pop()

    // Exercise 6: True or False:
    // You can access elements in a queue by index, like with vectors.
    // Answer:
    // False

    // Exercise 7: Which function returns the number of elements in a queue ?
    // Answer:
    // size()
    std::cout << "Size of the cars queue : " << cars.size() << std::endl;
    return 0;
}