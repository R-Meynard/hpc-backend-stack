#include <iostream>

class Solution {
    public:
    // Function to search x in arr
    // arr : input array
    // x : element to be searched for
    int search(int arr[], int n, int x){
        int i;
        // iterate over the array elements
        for(int i = 0; i < n; i++){
            // Check if the element is equal to x
            if(arr[i] == x){
                return i;
            }
        }
        return -1;
    }
};
int main(int argc, char* argv[]){
    // Test 1 with arr1
    int arr1[] = {1525, 54, 9, 86 , 12, 52, 12, 78, 4, 5, 32};
    
    Solution sol1;
   int result =  sol1.search(arr1, 11, 5);
   std::cout << "result = " << result << std::endl;
}