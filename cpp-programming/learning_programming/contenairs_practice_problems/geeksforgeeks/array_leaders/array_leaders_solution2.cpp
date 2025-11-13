#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Solution {
    // Function to find the leaders in the array.
    public:
        std::vector<int> leadersVersion1(std::vector<int>& arr);
        std::vector<int> leadersVersion2(std::vector<int>& arr);
        std::vector<int> leadersVersion3(std::vector<int>& arr);
        std::vector<int> leadersVersion4(std::vector<int>& arr);
        std::vector<int> leadersVersion5(std::vector<int>& arr);
};

std::vector<int> Solution::leadersVersion1(std::vector<int>& arr){
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

std::vector<int> Solution::leadersVersion2(std::vector<int>& arr){
    int leaders;
    int founded_max = 0;
    std::vector<int> vecLeaders;
    for(int i = 0; i < arr.size(); i++){
        leaders = arr[i];
        for(int j = i+1; j < arr.size(); j++){
            founded_max = std::max(leaders, arr[j]);
            std::cout << "founded_max = " << founded_max << std::endl;
            if(founded_max == arr[j]){
                break;
            }
        }
        if(founded_max == leaders){
            vecLeaders.push_back(founded_max);
        } 
    }

    vecLeaders.push_back(arr[arr.size()-1]);

    for(int x : vecLeaders){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    return vecLeaders;
}

std::vector<int> Solution::leadersVersion3(std::vector<int>& arr){
    int leaders;
    std::vector<int> vecLeaders;
    int start = 0;
    for(int i = start; i < arr.size(); i++){
        leaders = arr[i];
        auto result = std::max_element((arr.begin()+start), arr.end());
        if(leaders == *result) vecLeaders.push_back(leaders);
        start++;

    }

    for(int x : vecLeaders){
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return vecLeaders;
}

std::vector<int> Solution::leadersVersion4(std::vector<int>& arr){
    int leaders;
    std::vector<int> vecLeaders;

    int start = 0;
    while(start < arr.size()){
        leaders = arr[start];
        auto result  = max_element(arr.begin()+start, arr.end());
        if( leaders == *result){
            vecLeaders.push_back(leaders);
        }
        start++;
    }

    for(int x : vecLeaders){
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return vecLeaders;
}

std::vector<int> Solution::leadersVersion5(std::vector<int>& arr){
    int leaders;
    std::vector<int> vecLeaders;
    vecLeaders.push_back(arr.back());
    leaders = arr[arr.back()];
    for(int i = arr.size()-2; i >=0; --i){
        if(arr[i] > leaders){
            vecLeaders.push_back(arr[i]);
            leaders = arr[i];
        }

    }

    std::reverse(vecLeaders.begin(), vecLeaders.end());

    return vecLeaders;
}
int main(int argc, char *argv[]){
    // Test with vec1
    std::vector<int> vec1 = {16, 17, 4, 3, 5, 2};
    Solution sol1;
    sol1.leadersVersion1(vec1);
    // Test with vec2
    std::vector<int> vec2 = {10, 4, 2, 4, 1};
    sol1.leadersVersion1(vec2);
    // Test with vec3
    std::vector<int> vec3 = {5, 10, 20, 40};
    sol1.leadersVersion1(vec3);
    // Test with vec4
    std::vector<int> vec4 = {30, 10, 10, 5};
    sol1.leadersVersion1(vec4);

    Solution sol2;
    sol2.leadersVersion5(vec1);
    sol2.leadersVersion5(vec2);
    sol2.leadersVersion5(vec3);
    sol2.leadersVersion5(vec4);
    return 0;
}