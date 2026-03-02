#include <iostream>

int main(){

    int choice = 1;

    // 1 = Coffe
    // 2 = Tea

    switch (choice)
    {
        case 1:
            /* code */
            std::cout << "You ordered Coffee" << std::endl;
            break;
        
        case 2:
            std::cout << "You ordered Tea" << std::endl;

        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }
    return 0;
}