#include <iostream>
#include <array>
#include <random>
#include <algorithm>

int main(){
    constexpr int SIZE = 10;
    std::array<int, SIZE> numbers;

    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<int> distrib(1, 100);

    // Fill numbers
    for(int& n : numbers)
        n = distrib(gen);

    // Display data of numbers
    for(int n : numbers)
        std::cout << n << ' ';
    std::cout << '\n';

    // Print the integers of numbers in the reverse order
    std::cout << "Reverse ordfer: \n";
    for(auto it = numbers.rbegin(); it != numbers.rend(); ++it){
        std::cout << *it << ' ';
    }
    std::cout << '\n';
    return 0;
}