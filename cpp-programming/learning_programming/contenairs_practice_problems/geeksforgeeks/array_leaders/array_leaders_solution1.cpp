#include <iostream>
#include <vector>

class Solution {
    // Function to find the leaders in the array.
    public:
        std::vector<int> leaders(std::vector<int>& arr);
};

std::vector<int> Solution::leaders(std::vector<int>& arr){
    int leader;
    std::vector<int> vecLeaders;
    bool isLeader;
    for(int i = 0; i < arr.size(); i++){
        leader = arr[i];
        isLeader = true;
        for(int j = i; j < arr.size(); j++){
            if(leader < arr[j]){
                isLeader = false;
                break;
            }
        }
        if(isLeader==true){
            vecLeaders.push_back(leader);
        }
    }

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