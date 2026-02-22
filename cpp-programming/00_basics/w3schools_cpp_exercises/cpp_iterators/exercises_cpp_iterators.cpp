#include <iostream>
#include <iterator>
#include <vector>

int main(){

    // Exercise 1: What will the following code output?
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford"};
    int elt = 0;
    for(auto it = cars.begin(); it != cars.end(); ++it){
        std::cout << "Element "<< elt << " of cars as a vector: " << *it << std::endl;
        elt++;
    } 
    
    // Exercise 2: While header file is commonly needed for iterator-related algorithms like
    // sort()
    // Answer:
    // <algortithm>

    // Exercise 3: True or False:
    // You can use iterators to modify elements in a vector during iteration
    // Answer: 
    // True

    // Exercise 4: Which keyword allows the compiler to automatically dtermine the data type 
    // of an iterator in C++11 and later versions?
    // Answer:
    // auto 
    return 0;
}