#include <iostream>
#include <string>
#include <chrono>

// Write a program that prints:
// - your name
// - today's date
// - a personalized message
int main(){

    std::string name;
    std::cout << "What is your name ? : ";
    std::cin >> name;
    std::cout << "Name: " << name << "\n";

    // Get the timestamp for the current date 
    auto now = std::chrono::floor<std::chrono::days>(
        std::chrono::system_clock::now()
    );

    std::chrono::year_month_day ymd{now};
    std::cout << "Current Year: " << static_cast<int> (ymd.year()) << ", "
                 "Month: " << static_cast<unsigned>(ymd.month()) << ", "
                 "Day: " << static_cast<unsigned>(ymd.day()) << "\n";

    // Personalized message
    std::cout << name + ", you like working in order to be smarter" << "\n";

    return 0;

}