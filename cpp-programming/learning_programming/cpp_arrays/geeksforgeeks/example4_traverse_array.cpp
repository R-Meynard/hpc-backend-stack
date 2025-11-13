#include <iostream>

int main(int argc, char *argv[]){

    int arr[5] = {2, 4, 8, 12, 16};

    // Traversing and printing elements
    for(int i = 0; i < 5; i++){
        std::cout << "arr["<<i<<"] = " << arr[i] << std::endl;
    }
    return 0;
}