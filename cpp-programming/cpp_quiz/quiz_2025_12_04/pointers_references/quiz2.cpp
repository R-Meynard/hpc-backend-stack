#include <iostream>

int main(int argc, char *argv[]){
    // Question 1 : Que fait int *ptr = nullptr; en C++ ?
    // Answer :
    // C. Initialise p avec une valeur nulle (aucune adresse)

    // Question 2 : Quelle est la difference entre const int* p et int* const p ?
    // Answer :
    // A. Le premier interdit de modifier la valeur pointee, le second interdir de changer l adresse.

    // Question 3 :  Que fait &(*ptr) si p est un pointeur valide ?
    // Answer :
    // B. Retourne l adresse originale stockee dans p.

    // Question 4 : Peut-on avoir un tableau de references en C++ ?
    // Answer :
    // C. Non, car les references sont des alias et ne peuvent pas etre stockees dans un tableau.

    // Question 5 : Quelle est la difference entre p++ et ++p  pour un pointeur p ?
    int var2 = 15;
    int *p = &var2;
    std::cout << " ++(*p) = " << ++(*p) << std::endl;
    std::cout << " (*p) = " << (*p) << std::endl;
    std::cout << " (*p)++ = " << (*p)++ << std::endl;
    std::cout << " (*p) = " << (*p) << std::endl;

    int var3 = 25;
    int *ptr2 = &var3;
    std::cout << " ++ptr2 = " << ++ptr2 << std::endl;
    std::cout << " ptr2 = " << ptr2 << std::endl;
    std::cout << " ptr2++ = " << ptr2++ << std::endl;
    std::cout << " ptr2 = " << ptr2 << std::endl;
    // Answer :
    // A. p++ et ++p incrementent tous les deux l adresse memoire, mais pas au meme moment.

    // Question 6 : Que fait int* &refP = p; si p est un pointeur vers int ?
    // Answer :
    int var4 = 30;
    int *ptr3 = &var4;
    int* &refP = ptr3;
    std::cout << " *refP = " << *refP << std::endl;
    std::cout << " *ptr3 =  " << *ptr3 << std::endl;
    // B. Cree une reference vers le pointeur p, permettant de modifier p via refP.

    // Question 7 : Que retourne sizeof(p) si p est un pointeur vers un int sur une machine 64 bits ?
    // Answer :
    // C. 8  octets, car les pointeurs font 8 octets sur une architecture 64 bits.

    // Question 8 : Que fait int* p = new int[10]; ?
    // Answer : 
    // B. Alloue dynamiquement un tableau de 10 entiers et retourne un pointeur vers le premier element.

    // Question 9 : Que se passe-t-il si on oublie delete[] p; apres new int[10]; ?
    // Answer :
    // B. Fuite de memoire, car la memoire allouee n est pas liberee.

    // Question 10 : Peut-on avoir une reference vers une reference en C++ ?
    // Answer :
    // B. Non, car les references sont des alias et ne peuvent pas etre references elles memes.
    int var5 = 50;
    int &refVar5 = var5;
    int &refRefVar5 = refVar5;
    std::cout << " refVar5 = " << refVar5 << std::endl;
    std::cout << " refRefVar5 = " << refRefVar5 << std::endl;

    // Question 11 : Quelle est la difference entre int&& r et int& r ?
    // Answer :
    // A. int&& r est une reference rvalue, tandis que int& r est une reference lvalue.
    int var6 = 60;
    int &r = var6;
    int &&r2 = 60;
    std::cout << " r = " << r << std::endl;
    std::cout << " r2 = " << r2 << std::endl;
    // Les concepts lvalue et rvalue sont lies a la classification des expressions en C++.
    // lvalue ou valeur gauche : est une expression qui fait reference a un objet avec un emplacement memoire identifiable. 
    // Elle represente unn objet pouvant etre modifie.
    // rvalue ou valeur droite : est une expression qui ne fait pas reference a un emplacement memoire identifiable.
    // Elle represente un objet qui ne peut pas etre modifie.

    // Question 12 : Que fait std::move(x) ?
    // Answer :
    // B. Convertit x en une rvalue, permettant le transfert de ressources via le mouvement.

    // Question 13 : Que fait delete nullptr; ?
    // Answer :
    // B. Ne fait rien, car delete sur un pointeur nul est sans effet.

    // Question 14 : Peut-on avoir un pointeur vers une reference en C++ ?
    // Example of code : 
    int var7 = 70;
    int var8 = 80;
    int &refVar7 = var7;

    //int& *ptrVar7 = &refVar7; // This line will cause a compilation error because C++ does not allow pointers to references.
    // Answer :
    // Non, on ne peut avoir un pointeur vers une reference en C++.

    // Question 15 : Que fait int *p = &x; int& r = *p ?
    // Answer : 
    // B. r devient une reference vers x.
    // Test of code :
    int var10 = 100;
    int *p10 = &var10;
    int& r10 = *p10;
    std::cout << " var10 = " << var10 << std::endl;
    std::cout << " *p10 = " << *p10 << std::endl;
    std::cout << " r10 = " << r10 << std::endl;
    return 0;
}