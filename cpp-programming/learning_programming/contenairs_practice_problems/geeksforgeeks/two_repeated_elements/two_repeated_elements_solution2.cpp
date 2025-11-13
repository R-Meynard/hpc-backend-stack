#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
    public:
        void twoRepeated(std::vector<int>& arr);
        void twoRepeatedSol2(std::vector<int>& arr);
};

void Solution::twoRepeated(std::vector<int>& arr){
    int nb;
    std::pair<int, int> index;
    std::vector<std::pair<int, int>> pairIndex; 
    std::vector<int> result;
    int tmp; 
    int nextindex;
    for(int i = 0; i < arr.size(); i++){
        tmp = arr[i];
        for(int j = i; j < arr.size(); j++){
            if( (tmp == arr[j]) && (i != j) ){
                std::cout << "temp = " << tmp << std::endl;
                pairIndex.push_back(std::make_pair(i, j));
                break;
            }
        }
    }

    for (auto& p : pairIndex) {
        std::cout << "Pair: (" << p.first << ", " << p.second << ")" << std::endl;
    }

    if(pairIndex[1].second < pairIndex[0].second){
        result.push_back(arr[pairIndex[1].second]);
        result.push_back(arr[pairIndex[0].second]);
    }else{
        result.push_back(arr[pairIndex[0].second]);
        result.push_back(arr[pairIndex[1].second]);
    }

    for(int x : result){
        std::cout << "result = " << x << std::endl;
    }
}

void Solution::twoRepeatedSol2(std::vector<int>& arr){
    std::unordered_map<int, int> um;
    // Count frequency of every elements
    for(auto i:arr){
        um[i]++;
    }
    
    // Store elements that are duplicated in the input vector
    std::vector<int> result;
    for (auto i : um){
        // Check frequency of elements
        if(i.second > 1){
            std::cout << i.first << " ";
            result.push_back(i.first);
        }
    }
    std::cout << std::endl;

    // Find the order of the duplication of each element
    std::vector<int> placement;
    std::vector<int> result_final;
    // Find the element 30 in the vector
    for(int i = 0; i < result.size(); i++){
        for(int ii = 0; ii < arr.size(); ii++){
            if(result[i] == arr[ii]){
                std::cout << "ii =  " << ii << std::endl;
                placement.push_back(ii);
            }
        }
    }

    if(placement[1] > placement[3]){
        result_final.push_back(result[1]);
        result_final.push_back(result[0]);
    }else{
        result_final.push_back(result[0]);
        result_final.push_back(result[1]);
    }

    for(int x : result_final){
        std::cout << "result = " << x << std::endl;
    }
}

int main(int argc, char *argv[]){
    std::vector v1 = {1, 2, 1, 3, 4, 3};
    std::vector v2 = {1, 2, 2, 1};
    std::vector v3 = {1, 2, 1, 3, 4, 3};
    Solution sol1;
    sol1.twoRepeatedSol2(v3);
    return 0;
}