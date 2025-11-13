#include <iostream>

void printArrayInReverse(int arr[], size_t n){

    std::cout << "Reverse array : " << std::endl;
    for(int i = n- 1; i >= 0; i--){
        std::cout << "arr[" <<i <<"] = " << arr[i] << std::endl;
    }
}
int main(int argc, char *argv[]){

    int arr[] = {2, 0, -6, 8 , 7, -15, 19, 3, 4};
    printArrayInReverse(arr, 9);
    return 0;
}