#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
    public:
        int search(std::vector<int>& arr, int x);
};

int Solution::search(std::vector<int>& arr, int x){
    
    auto it = std::find(arr.begin(), arr.end(), x);

    int index;
    if( it != arr.end()){
        index = distance(arr.begin(), it);
    }else{
        index = -1;
    }
    return index;
}

int main(int argc, char *argv[]){

    // Test 1 with arr1
    std::vector<int> arr1 = {1525, 54, 9, 86 , 12, 52, 12, 78, 4, 5, 32};

    Solution sol1;
    int result =  sol1.search(arr1, 78);
    std::cout << "result = " << result << std::endl;
    return 0;
}