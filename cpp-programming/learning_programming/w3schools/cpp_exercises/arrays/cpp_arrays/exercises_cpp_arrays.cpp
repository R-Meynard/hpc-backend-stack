#include <iostream>
#include <string>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct index number to print Kasper from the array.
    // Answer :
    std::string names[4] = {"Liam", "Jenny", "Angie", "Kasper"};
    std::cout << "Print Kasper from the array : "<< names[3] << std::endl;

    // Question 2 : What is teh output of the following code ?
    std::string names2[4] = {"Liam", "Jenny", "Angie", "Kasper"};
    // Answer :
    std::cout << "Print Angie from the array : " <<names2[2] << std::endl;

    // Question 3 : Create an array of type string called cars.
    // Answer :
    std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    // Question 4 : Print the value of the second element in the cars array.
    // Answer :
    std::string cars2[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    std::cout << "Print the value of the second element in the cars array : " << cars2[1] << std::endl;

    // Question 5 : Change the value from "Volvo" to "Opel", in the cars array.
    // Answer :
    std::string cars3[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars3[0] = "Opel";
    std::cout << "New value of cars3[0] : " << cars3[0] << std::endl;
    return 0;
}