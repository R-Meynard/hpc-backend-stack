#include <iostream>

int main(int argc, char * argv[]){

    int arr[] = {2, -1, 5, 6, 6, 0, -3};

    // Traverse array with for_each
    // using array's data type
    std::cout << "Traversing using array's data type : ";
    for(int x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Traversing array with for_each
    // using auto keyword
    std::cout << "Traversing using auto keyword : ";
    for(auto x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}