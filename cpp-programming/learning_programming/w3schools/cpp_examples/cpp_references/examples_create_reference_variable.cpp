#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    std::string food = "Pizza";
    std::string &refFood = food;

    std::cout << "Original food value : " << food << std::endl;
    std::cout << "Reference refFood value : " << refFood << std::endl;
    return 0;
}