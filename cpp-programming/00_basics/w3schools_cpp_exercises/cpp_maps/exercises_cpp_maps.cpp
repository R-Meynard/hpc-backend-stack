#include <iostream>
#include <map>
#include <string>

int main(){

    // Exercise 1: What is the primary characteristic of a map in C++?
    // Answer:
    // Stores elements in key/value pairs with unique keys

    // Exercise 2: How would you create a map called 'people' to store string keys and integer
    // values
    // Answer:
    std::map<std::string, int> people;

    // Exercise 3: What will the following code output?
    people = {{"John", 32}, {"Adele", 45}, {"Bo", 29}};
    std::cout << "Integer value of the element John within people: " << people["John"] << std::endl;
    // Answer:
    // 32

    // Exercise 4: True or False:
    // A map can store multiple elements with the same key.
    // Answer:
    // False

    // Exercise 5: Which function is used to add a new element to a map?
    // Answer:
    // insert()

    // Exercise 6: How can you remove an element from a map by its key?
    // Answer:
    // erase()

    // Exercise 7: What will happen if you try to insert  two elements with the same key into a map?
    // Answer:
    // Only the first element will be kept

    std::map<std::string, int> list_of_people = {{"John", 32}, {"Adele", 45}, {"Bo", 29}};
    // Trying to add two elements with equal keys
    list_of_people.insert({"Jenny", 22});
    list_of_people.insert({"Jenny", 30});
    for(auto person : list_of_people){
        std::cout << person.first << " is: " << person.second << std::endl;
    }
    return 0;
}