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

int missingNum(std::vector<int>& arr) {
    // code here
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
    }
    
    if(missingElements == 0){
        if(arr[0] != 1){
            missingElements =  1;
        }else if(arr[arr.size()-1] == arr.size()){
            missingElements =  arr.size() + 1;
        }
    }
    
    return missingElements;
}

int main (int argc, char *argv[]){

    // Test 2 with vector 2
    std::vector<int> v2 = {2, 3, 7, 10, 5, 6, 8, 4, 1};
    int result2 = missingNum(v2);
    std::cout << result2 << std::endl;
    return 0;
}