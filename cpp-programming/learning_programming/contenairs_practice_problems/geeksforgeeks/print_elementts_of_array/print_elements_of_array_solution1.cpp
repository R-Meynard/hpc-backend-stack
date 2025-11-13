#include <iostream>
#include <vector>
// Just print the space seperated array elements
void printArray(std::vector<int>& arr){
    // code here
    for(int x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
int main(int argc, char *argv[]){
    std::vector<int> v1;
    for(int i = 0; i < 5; i++){
        v1.push_back(i);
    }
    printArray(v1);
    std::vector<int> v2 = {2, 5 , 6, 78, 15 , 16, 4};
    printArray(v2);
    return 0;
}