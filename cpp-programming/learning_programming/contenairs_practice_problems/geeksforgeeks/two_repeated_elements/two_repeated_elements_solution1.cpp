#include <iostream>
#include <vector>

class Solution {
    public:
        void twoRepeated(std::vector<int>& arr);
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

int main(int argc, char *argv[]){

    std::vector v1 = {1, 2, 1, 3, 4, 3};
    std::vector v2 = {1, 2, 2, 1};
    std::vector v3 = {1, 2, 1, 3, 4, 3};
    Solution sol1;
    sol1.twoRepeated(v3);
    return 0;
}