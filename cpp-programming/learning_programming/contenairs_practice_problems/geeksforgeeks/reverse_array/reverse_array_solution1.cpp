#include <iostream>
#include <vector>
#include <cmath>

void reverseArray(std::vector<int> &arr) {
    int tmp = arr[0];
    int last_index = arr.size() - 1;
    arr[0] = arr[last_index];
    arr[last_index] = tmp;
    if(arr.size() % 2 == 0){
        for(int i = 1; i < (arr.size() / 2); i++){
            last_index --;
            tmp = arr[i];
            arr[i] = arr[last_index];
            arr[last_index] = tmp;
        }
    }else{
        for(int i = 1; i < static_cast<int> ((arr.size() / 2)); i++){
            last_index --;
            tmp = arr[i];
            arr[i] = arr[last_index];
            arr[last_index] = tmp;
        }
    }

    for(int x : arr){
        std::cout << x << std::endl;
    }
}

int main(int argc, char *argv[]){
    std::cout << "Test avec l exemple 1 " << std::endl;
    // Example 1 : an array with multiple zeros
    std::vector<int> numbers1 = {1, 2, 3, 4, 5, 6};
    reverseArray(numbers1);

    std::cout << "Test avec l exemple 2 " << std::endl;
    // Example 1 : an array with multiple zeros
    std::vector<int> numbers2 = {1, 2, 3, 4, 5, 6, 7};
    reverseArray(numbers2);
    return 0;
}