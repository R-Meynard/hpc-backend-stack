#include <iostream>

int main(int argc, char *argv[]){

    //declaring and initializing an array of size 5
    int arr[5] = {2, 5, 8, 12, 16};

    // printing array elements
    for(int i = 0; i < 5; i++){
        std::cout << "arr["<<i <<"] = " << arr[i] << std::endl;
    }
    return 0;
}