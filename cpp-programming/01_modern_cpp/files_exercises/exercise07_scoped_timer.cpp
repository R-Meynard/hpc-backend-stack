/*
Exercice 07 — RAII : ScopedTimer

Objectif :
- Implémenter une classe ScopedTimer qui mesure la durée entre sa création et sa destruction.
- Dans le destructeur, afficher la durée (ms) et un message donné.
- Utiliser chrono high_resolution_clock.

Tâches :
- Utiliser ScopedTimer dans main pour mesurer une opération (ex: somme dans boucle).

Indices :
- Mesurer en milliseconds via std::chrono::duration_cast.
*/

#include <chrono>
#include <iostream>
#include <string>

class ScopedTimer {
    std::chrono::high_resolution_clock::time_point start_;
    std::string label_;
public:
    ScopedTimer(const std::string& label) : start_(std::chrono::high_resolution_clock::now()), label_(label) {}
    ~ScopedTimer() {
        auto end = std::chrono::high_resolution_clock::now();
        auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start_).count();
        std::cout << label_ << " took " << ms << " ms\n";
    }
};

int main() {
    {
        ScopedTimer t("calculation");
        volatile long long s = 0;
        for (long long i = 0; i < 5000000; ++i) s += i;
        (void)s;
    }
    std::cout << "exercise07: OK\n";
    return 0;
}