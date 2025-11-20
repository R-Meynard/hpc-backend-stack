#include <iostream>
#include <string>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct variable name so that destination refers to city.
    std::string city = "Paris";
    std::string &destination = city;
    std::cout << "destination = " << destination << std::endl;

    // Question 2 : Drag and drop the correct variable name so assigning through the reference updates the original.
    std::string city2 = "Paris";
    std::string &destination2 = city2;
    destination2= "London";
    std::cout << "city2 = " << city2 << std::endl;

    // Question 3 : What is a reference in C++ ?
    // Answer :
    // A reference to an existing variable. It is an alias for the original variable.

    // Question 4 : Create a reference variable named meal, which should be a reference to the food variable.
    std::string food = "Pizza";
    std::string &meal = food;
    std::cout <<"meal = " << meal << std::endl; 
    
    // Question 5 : What will be the output of this code ?
    std::string food2 = "Burger";
    std::string &meal2 = food2;
    std::cout << "meal2 = " << meal2 << std::endl;
    return 0;
}