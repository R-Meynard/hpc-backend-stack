#include <iostream>
#include <vector>

// sort the elements of the vector
void sortVector(std::vector<int>& arr){
    int min;
    // Sort the elements of the vector
    for(int i = 0; i < arr.size() - 1; i++){
        for(int j = 0; j < arr.size() - i - 1; j++){
            if(arr[j+1] < arr[j]){
                min =  arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = min;
            }
        }
    }
}

int missingNum(std::vector<int>& arr){
    sortVector(arr);
    int missingElements = 0;
    // search the missing elements
    if(arr.size() > 1){
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == arr[i+1]){
                continue;
            }else if(arr[i] != arr[i-1]+1){
                missingElements = arr[i-1] + 1 ;
            }
        }
    }else if(arr.size() == 1){
        missingElements = arr[0] + 1;
    }
    return missingElements;
}

int main(int argc, char *argv[]){
    // Test 1 with vector 1
    std::vector<int> v1 = {8, 2, 4, 5, 3, 7, 1};
    int result1 = missingNum(v1);
    std::cout << result1 << std::endl;

    // Test 2 with vector 2
    std::vector<int> v2 = {1, 1, 1, 5};
    int result2 = missingNum(v2);
    std::cout << result2 << std::endl;
    return 0;
}