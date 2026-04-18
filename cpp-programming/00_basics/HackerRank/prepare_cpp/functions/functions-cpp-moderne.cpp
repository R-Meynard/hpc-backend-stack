#include <iostream>
#include <algorithm>
#include <random> 
#include <ctime>

int max_of_four(int a, int b, int c, int d){
    return std::max(std::max(a, b), std::max(c, d));
}

int main(){

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, 1000000);

    int a = dist(gen);
    int b = dist(gen);
    int c = dist(gen);
    int d = dist(gen);
    
    std::cout <<"a: " << a << "\n";
    std::cout <<"b: " << b << "\n";
    std::cout <<"c: " << c << "\n";
    std::cout <<"d: " << d << "\n";

    int result = max_of_four(a, b, c, d);
    std::cout << "result: " << result << "\n";
    return 0;
}