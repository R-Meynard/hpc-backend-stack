#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct keywords to create a loop that always runs at least once and continues while the condition is true.
    // Answer :
    int i = 1;
    do {
        std::cout << "i = " << i << std::endl;
        i++;
    }while (i <= 5);

    // Question 2 : What is a key difference betwween a do/while loop and a while loop ?
    // Answer :
    // A do/while loop will execute the code block at least once, even if the condition is false.
    
    // Question 3 : Use the do/while loop to print i as long as i is less than 6.
    // Answer :
    std::cout << std::endl;
    int i3 = 1;
    do {
        std::cout << "i3 = " << i3 << std::endl;
        i3++;
    }while(i3 < 6);

    // Question 4 : What will be the output of this code ?
    std::cout << std::endl;
    int i4 = 3;
    do {
        std::cout << "i4 = "<< i4 << std::endl;
        i4++;
    }while(i4 < 3);

    // Question 5 : What happens if the variable in the do/while condiution is not increased ?
    // Answer :
    // The loop will run forever (infinte loop)
    return 0;
}