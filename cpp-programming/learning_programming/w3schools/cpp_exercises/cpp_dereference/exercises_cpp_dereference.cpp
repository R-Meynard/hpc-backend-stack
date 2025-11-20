#include <iostream>
#include <string>

int main(int argc, char *argv[]){

    // Question 1 : Drag and dop the correct expression to change the value of food through its pointer.
    std::string food = "Burger";
    std::string *ptr = &food;
    *ptr = "Sushi";
    std::cout << "Value of food after changing through its pointer *ptr : " << food << std::endl;

    // Question 2  : What will be the output of the following code ?
    std::string food2 = "Pasta";
    std::string *ptr2 = &food2;
    std::cout << "Value pointed to by ptr2 : " << *ptr2 << std::endl;

    // Question 3 : Which operator is used to dereference a pointer in C++ ?
    // Answer :
    // The asterik symbol (*)

    // Question 4 : Fill in the blanks to dereference ptr and print the value it points to.
    int num = 100;
    int *ptr3 = &num;
    std::cout << "Value pointed to by ptr3 : " << *ptr3 << std::endl;
   return 0;
}