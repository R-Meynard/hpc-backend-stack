#include <iostream>
#include <stack>

int main(){

    // Exercise 1: What is the order of element access in a stack ?
    // Answer:
    // LIFO (Last In, First Out)

    // Exercise 2: How would you create a stack called cars to store strings ?
    // Answer:
    std::stack<std::string> cars;

    // Exercise 3: Which function is used to add an element to the topp of a stack ?
    // Answer: 
    // push()

    // Exercise 4: True or False:
    // You can access elements in a stack by index, like with vectors.
    // Answer:
    // False

    // Exercise 5: What will the following code output after adding and removing elements ?
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.pop();
    std::cout << "First element of cars is : " << cars.top() << std::endl;
    // Answer:
    // BMW
    return 0;
}