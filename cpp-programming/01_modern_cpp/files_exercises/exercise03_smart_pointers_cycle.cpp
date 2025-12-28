/*
Exercice 03 — Smart pointers et cycles

Objectif :
- Comprendre les cycles avec shared_ptr et corriger l'exemple.
- Deux classes A et B se pointent mutuellement. Implémente A::create et B::create qui retournent shared_ptr.
- Réparer la fuite en utilisant weak_ptr pour un des pointeurs.

Tâches :
1) Compléter la structure pour créer un cycle simulée puis la casser.
2) Vérifier que la destruction a lieu (messages dans le destructeur).

Indice :
- Utiliser weak_ptr pour la relation "observateur".
*/

#include <memory>
#include <iostream>

struct B; // forward

struct A {
    std::shared_ptr<B> b_ptr;
    A() { std::cout << "A constructed\n"; }
    ~A() { std::cout << "A destroyed\n"; }

    static std::shared_ptr<A> create();
};

struct B {
    // change shared_ptr to weak_ptr on one side to solve cycle
    std::weak_ptr<A> a_ptr; // observe A
    B() { std::cout << "B constructed\n"; }
    ~B() { std::cout << "B destroyed\n"; }

    static std::shared_ptr<B> create();
};

std::shared_ptr<A> A::create() {
    // IMPLEMENT_ME: create A and B, link them using shared_ptr/weak_ptr
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    a->b_ptr = b;
    b->a_ptr = a; // weak: no cycle
    return a;
}

std::shared_ptr<B> B::create() {
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    a->b_ptr = b;
    b->a_ptr = a;
    return b;
}

int main() {
    {
        auto a = A::create();
        // cycle would occur if both sides used shared_ptr.
        // Because B keeps weak_ptr to A, destroying 'a' will destroy both.
    }
    std::cout << "exercise03: scope ended — if no leaks, destructors printed above\n";
    return 0;
}