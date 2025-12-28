#include <iostream>


void printArray(int arr[], size_t N){

    for(int i = 0; i < N; i++){
        std::cout << "arr[" <<i<<"] = " <<arr[i] << " ";
    }
    std::cout << std::endl;
}
int main(int argc, char *argv[]){
    int arr[] = {2, -1, 5, 6, 0, -3};
    int n = sizeof(arr) /sizeof(arr[0]);
    printArray(arr, n);
    return 0;
}