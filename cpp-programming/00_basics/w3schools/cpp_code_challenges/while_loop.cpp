#include <iostream>

int main(){

    // 1. Declare an int variable named i and set it to 1
    // 2. Use a while loop to run as long as i is less than or equal to 5
    // 3. Inside the loop, print the value of i
    // 4. Increase i by 1 in each loop

    int i = 1;

    while(i <= 5){
        std::cout << i << std::endl;
        i++;
    }
    
    return 0;
}