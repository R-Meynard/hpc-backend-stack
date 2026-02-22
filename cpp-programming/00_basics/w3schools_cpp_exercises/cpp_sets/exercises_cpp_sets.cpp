#include <iostream>
#include <set>
#include <string>

int main(){

    // Exercise 1: Which header file is required to use sets in C++ ?
    // Answer:
    // <set>

    // Exercise 2: What will the following code output ?
    std::set<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    for(std::string car : cars){
        std::cout << car << " ";
    }
    std::cout << std::endl;
    // Answer:
    // BMW Ford Mazda Volvo

    // Exercise 3: Which function adds a new element to a set?
    // Answer:
    // .insert()

    // Exercise 4: True oàr False:
    // Elements in a set are sorted automatically indescending order.
    // Answer:
    // False

    // Exercise 5: Which function removes an element from a set?
    // Answer:
    // .erase()

    // Exercise 6: How do you find out how many elements are in a set?
    // Answer:
    // .size()

    // Exercise 7: Which of the following will be ignored when added to a set?
    std::set<std::string> list_of_cars = {"Volvo", "BMW", "Ford"};
    list_of_cars.insert("BMW");
    for(std::string listCars : list_of_cars){
        std::cout << listCars << " ";
    }
    std::cout << std::endl;
    return 0;
}