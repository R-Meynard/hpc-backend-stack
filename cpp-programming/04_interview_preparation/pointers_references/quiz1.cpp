#include <iostream>

int main(int argc, char *argv[]){

    // Question 1 : Que contient un pointeur en C++ ?
    // Answer :
    // L adresse d'une variable.

    // Question 2 : Quelle est la difference entre une reference et un pointeur en C++ ?
    // Answer :
    // Une reference est un alias permanent

    // Question 3 : Que signifie l operateur '*' applique a un pointeur ?
    // Answer :
    // le pointeur *ptr accede a la valeur stockee a l adresse memoire contenue dans ptr.

    // Question 4 :  Que se passe-t-il si on dereference un pointeur nul (`nullptr`) en C++ ?
    // Answer :
    // On a un comportement indefini (crash probable).

    // Question 5 : Quelle syntaxe permet de declarer une reference en C++ ?
    // Answer :
    // int a = 5; int &refA = a;

    // Question 6 : Quelle est la valeur d un pointeur non initialise en C++ ?
    // Answer :
    // Une adresse memoire aleatoire (comprtement indefini lors de la dereference)

    // Question 7 : Quelle est la taille d un pointeur en C++ sur une architecture de 64 bits ?
    // Answer :
    // 8 octets (64 bits)

    // Question 8 : Que fait l operateur '&' applique a une variable en C++ ?
    // Answer :
    // Il retourne l adresse memoire de la variable.

    // Question 9 : Peut-on avoir une reference nulle en C++ ?
    // Answer :
    // Non, une reference doit toujours faire reference a une variable valide.

    // Question 10 : Quelle est la difference entre 'int* p' et 'int& r' en C++ ?
    // Answer :
    // 'int *p' est un pôinteur vers un int, alors que 'int &r' est une reference a un int.

    // Question 11 : Que fait 'delete p;' en C++ ?
    // Answer : 
    // Il libere la memoire allouee dynamiquement a laquelle p pointe.

    // Test 
    int var = 7;
    int *ptr = &var;
    std::cout << "Value of var by pointer: " << *ptr << std::endl;
    // delete ptr; // Note : This is incorrect usage; ptr was not allocated with new.
    // Message from compiler : Warning : attempt to delete a pointer that was not allocated with new.
    // Message :  warning: ‘void operator delete(void*, std::size_t)’ called on unallocated object ‘var’ [-Wfree-nonheap-object]

    // Question 12 : Que se passe-t-il si on fait 'delete' sur un pointeur non alloue par 'new' ?
    // Answer :
    // Comportement indefini (crash probable).

    // Question 13 : Quelle est la difference entre 'new' et 'malloc' en C++ ?
    // Answer :
    // 'new' est un operateur C++ qui alloue de la memore et construit un objet, alors que 'malloc' est une fonction C qui alloue de la memoire brute sans appeler le constructeur.

    // Question 14 : Que fait 'int *p = new int 5' en C++ ?
    //Answer : 
    // Il alloue dynamiquement un int initilise a 5 et retourne un pointeur vers cet int.
    
    // Question 15 : Quelle est la difference entre 'delete p;' et 'delete[] p;' en C++ ?
    // Answer :
    // 'delete p;' libere la memoire allouee pour un seul objet.
    // 'delete[] p;' libere la memoire allouee pour un tableau d objets.
    return 0;
}