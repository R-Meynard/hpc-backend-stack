/*
Exercice 09 — Undefined Behavior (UB) : détection et correction

Enoncé :
- Le code ci-dessous contient un bug de type use-after-free ou accès hors limites.
- Identifier le problème, expliquer brièvement pourquoi c'est UB, et corriger le code.

Tâches :
- Corriger le code (voir TODO).
- Ajouter petit test pour vérifier comportement correct.

Indice :
- Ne renvoyer pas un pointeur vers une variable locale.

*/

#include <iostream>
#include <vector>
#include <cassert>
#include <memory>
#include <string>

// fonction fautive : retourne pointeur vers buffer local (dangling)
const char* bad_get_cstr() {
    char buf[16];
    std::snprintf(buf, sizeof(buf), "hello");
    return buf; // UB: buf is local -> dangling
}

// Correct version : retourner std::string ou allocate dynamiquement ou use static
std::string good_get_string() {
    char buf[16];
    std::snprintf(buf, sizeof(buf), "hello");
    return std::string(buf);
}

int main() {
    // bad usage (commented out to avoid actual UB)
    // const char* p = bad_get_cstr();
    // std::cout << p << "\n"; // UB: p points to freed stack memory

    std::string s = good_get_string();
    assert(s == "hello");
    std::cout << "exercise09: OK (UB fixed by returning string)\n";
    return 0;
}