#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
    public:
        std::vector<int> leaders(std::vector<int>& arr);
};
std::vector<int> Solution::leaders(std::vector<int>& arr){
    std::vector<int> vecLeaders;
    // Check if the vector is not empty
    if(arr.empty()){
        std::cout << "Vector is empty" << std::endl;
        return vecLeaders;
    }

    // The last element is always a leader
    int leadersValue = arr.back();
    vecLeaders.push_back(leadersValue);

    // Iterate from the second-to-last element to the first
    for(int i = arr.size() - 2; i >= 0; --i){
        if(arr[i] >= leadersValue){
            vecLeaders.push_back(arr[i]);
            leadersValue = arr[i];
        }
    }

    // We have to reorder the vector to have all the elements in the right order
    // Reverse the vector to get the leaders in their original order
    std::reverse(vecLeaders.begin(), vecLeaders.end());

    // Display leaders found
    for(int x : vecLeaders){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return vecLeaders;
}
int main(int argc, char *argv[]){
    // Test with vec1
    std::vector<int> vec1 = {16, 17, 4, 3, 5, 2};
    Solution sol1;
    sol1.leaders(vec1);
    // Test with vec2
    std::vector<int> vec2 = {10, 4, 2, 4, 1};
    sol1.leaders(vec2);
    // Test with vec3
    std::vector<int> vec3 = {5, 10, 20, 40};
    sol1.leaders(vec3);
    // Test with vec4
    std::vector<int> vec4 = {30, 10, 10, 5};
    sol1.leaders(vec4);
    return 0;
}