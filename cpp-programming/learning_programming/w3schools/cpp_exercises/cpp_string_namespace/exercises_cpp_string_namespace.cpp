#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  // Question 1 : How would you print a string without using using namespace
  // std; Answer :
  std::cout << "Hello" << std::endl;

  // Question 2 : True or False
  // You must use std:: if you omit using namespace std;
  // Answer :
  // True

  // Question 3 : Which of the following lines correctly declares a string
  // without using namespace std; Answer :
  std::string greeting = "Hello";
  std::cout << "Value of greeting : " << greeting << std::endl;

  return 0;
}