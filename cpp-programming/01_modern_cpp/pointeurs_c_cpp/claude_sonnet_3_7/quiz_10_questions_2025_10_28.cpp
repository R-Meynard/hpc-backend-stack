#include <iostream>

void modifier(int *p){
    *p = 100;
}

int add(int a, int b){
    return a+b;
}

int (*func_ptr)(int, int) = add;

int main(int argc, char *argv[]){

    // Question 1 : Declaration et initialisation 
    // Quel est le resultat de ce code
    int x = 5;
    int *p = &x;
    std::cout << "Value of *p : "<< *p << std::endl;
    // Answer :
    // B) Affiche 5

    // Question 2 : Operateur & et *
    // Completez : & est l operateur d adresse et * est l operateur de dereferencement 

    // Question 3 : Pointeur null
    // Qu affiche ce code
    int *p1 = NULL;
    if (p1 == NULL){
        std::cout << "Pointeur nul" << std::endl;
    } else {
        std::cout << "Pointeur valide" << std::endl;
    }
    // Answer :
    // A) Affiche Pointeur nul

    // Question 4 : Arithmetique des pointeurs
    // Quel est le resultat 
    int arr[] = {10, 20, 30, 40};
    int *p2 = arr;
    std::cout << "Value of *(p2+2) : "<< *(p2+2) << std::endl;
    // Answer :
    // C) 30

    // Question 5 : Pointeur vers pointeur 
    // Quel est le resultat 
    int x2 = 7;
    int *p3 = &x2; 
    int **pp = &p3;
    std::cout <<"Value of **p : "<< **pp << std::endl;
    // Answer :
    // B) Affiche 7

    // Question 6 : Passage par pointeur 
    // Quel est le resultat de ce code 
    int x3 = 10;
    modifier(&x3);
    std::cout <<"Value of x3 : "<< x3 << std::endl;
    // Answer :
    // B) Affiche 100

    // Question 7 :Allocation dynamique
    // Quel est le probleme potentiel
    int *p4 = (int*)malloc(sizeof(int)*10);
    // ... utilisation du tableau ... 
    free(p4);
    printf("Value of p4[0] = %d\n", p4[0]);
    // Answer :
    // A) Acces a une memoire liberee (Use-After-Free)

    // Question 8 : Pointeur de fonctions
    // Quel est le resultat
    printf("Value of func(3,4) : %d\n", func_ptr(3,4));
    // Answer : 7

    // Question 9 : Difference ptr++ et (*ptr)++
    // Quel est le resultat 
    int arr1[] = {5, 10, 15};
    int *p5 = arr1;
    printf("Value of *p++ and *p respectively : %d %d\n", *p5++, *p5);
    // Answer :
    // B) Affiche 5 5

    int arr2[] = {5, 10, 15};
    // Test 1 : *p++
    int *p6 = arr2;
    printf("Test 1 (*p++) : %d\n", *p6++);
    printf("Test 1 (*p) : %d\n", *p6);
    // Affiche : 5 10

    // Question 10 : Const et pointeurs
    // Quel code est valide 
    // Option A
    const int *p10; // Pointeur vers une constante
    // Option B
    int const *p11; // Pointeur vers une constante
    // Option C
    int x10 = 10;
    int * const p12 = &x10; // Pointeur constant
    // Option D
    // Toutes es options sont valides
    // Answer :
    // Toutes les options sont valides
    return 0;
}