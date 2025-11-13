#include <iostream>
#include <vector>
#include <unordered_map>


void countOccurrences(std::vector<int>& vec){
    // Declare an unordered_map to store the counts
    std::unordered_map<int, int> counts;

    // Iterate through the vector and count occurrences
    for(int num : vec){
        counts[num]++;
    }

    // Print the results
    std::cout << "Element occurrences:" << std::endl;
    for(const auto& pair : counts){
        std::cout << "Element " << pair.first << " appears " << pair.second << " times." << std::endl;
    }
}
int main(int argc, char* argv[]){
    std::vector v1 = {1, 2, 1, 3, 4, 3};
    countOccurrences(v1);
    return 0;
}