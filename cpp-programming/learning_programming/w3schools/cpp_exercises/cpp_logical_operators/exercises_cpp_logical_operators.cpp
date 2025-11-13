#include <iostream>

int add(int a, int b) {
    return a + b;
}

void modifier(int *p) {
    *p = 100;
}



int main(int argc, char *argv[]){

    // Question 1 : Drag and drop the correct logical operator so the expression returns 1 (true)
    // only if both conditions are true
    // Answer :
    int x  = 4;
    std::cout << "(x < 5 and x > 2) ? : " << (x < 5 and x > 2) << std::endl;

    // Question 2 : Drag and drop the correct logical operator to reverse the result of isRaining.
    // Answer :
    bool isRaining = false;
    std::cout << "Reverse the result of isRaining !isRaining : " << (!isRaining) << std::endl;

    // Question 3 : Which logical operator returns true only if both conditions are true ?
    // Answer :
    // && (Logical AND) 
    
    // Question 4 : What will be the result of the following expression if x = 4 ?
    // Answer :
    int x4 = 4;
    std::cout << "(x < 5 && x > 2) ? : " << (x < 5 && x > 2) << std::endl;

    // Question 5 : True or False :
    // The || operator returns true if at least one of the condition is true.
    // Answer :
    // True

    // Question 6 : Which logical operator would you use to reverse the result of a condition ?
    // Answer :
    // !

    int arr[] = {5, 10, 15};
    int *p = arr;
    printf("%d %d\n", *p++, *p);

    int (*func_ptr)(int, int) = add;
    printf("%d\n", func_ptr(3, 4));

    int x2 = 10;
    modifier(&x2);
    printf("%d\n", x2);

    int x3 = 7;
    int *p2 = &x3;
    int **pp = &p2;
    printf("%d\n", **pp);

    int arr1[] = {10, 20, 30, 40};
    int *p3 = arr1;
    printf("%d \n ", *(p3 + 2));

    int *p4 = NULL;
    if (p4 == NULL) {
        printf("Pointeur nul\n");
    } else {
        printf("Pointeur valide\n");
    }

    int x5 = 5;
    int *p5 = &x5;
    printf("%d\n", *p5);

    return 0;
} 