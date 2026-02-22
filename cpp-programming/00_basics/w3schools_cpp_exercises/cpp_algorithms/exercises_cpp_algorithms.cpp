#include <iostream>
#include <algorithm>
#include <vector>

int main(){

    // Exercise 1: What does the sort() function do ?
    // Answer:  
    // Sorts elements in ascending order by default

    // Exercise 2: What will the following code output?
    std::vector<int> numbers = {1, 7, 3, 5, 9, 2};
    std::sort(numbers.begin(), numbers.end());
    int inum = 0;
    for(int num : numbers){
        std::cout << "Number "<< inum << " of numbers: "<< num << std::endl;
        inum++;
    }
    // Answer:
    // 1 2 3 5 7 9

    // Exercise 3: Which function would you use to sort elements in reverse order?
    // Answer:
    // sort() with rbeing() and rend()

    // Exercise 4: Which function is used to search for a specific element in a data structure?
    // Answer:
    // find()

    // Exercise 5: Which function would you use to find the smallest element in a vector?
    // Answer:
    // min_element()

    // Exercise 6: What will the following code output?
    numbers = {1, 7, 3, 5, 9, 2};
    auto it = std::max_element(numbers.begin(), numbers.end());
    std::cout << "The maximum of numbers is : "<< *it << std::endl;
    // Answer:
    // 9

    // Exercise 7: Which function is used to fill all elements in a vector with a specific value
    // Answer:
    // fill()
    return 0;
}