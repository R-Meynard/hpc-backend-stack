#include <iostream>

// Driver code
int main(int argc, char *argv[]){

    int arr[] = {2, -1, 5, 6, 0, -3};

    for(const auto &var : arr){
        std::cout << var << " ";
    }

    std::cout << std::endl;
    return 0;
}