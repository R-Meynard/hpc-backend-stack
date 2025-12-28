/*
Exercice 10 — Performance basique : reserve vs push_back reallocation

Objectif :
- Mesurer (temps approximatif) la différence entre pousser N éléments dans std::vector
  avec et sans reserve(N), et observer le nombre d'allocations à l'aide d'un instrument simple:
  ici on ne peut pas intercepter allocations facilement, mais on compare temps.

Tâches :
- Implémenter bench function et afficher durations en ms.

Indice :
- Utiliser chrono high_resolution_clock.
*/

#include <vector>
#include <chrono>
#include <iostream>

using namespace std::chrono;

long long bench_no_reserve(size_t N) {
    auto start = high_resolution_clock::now();
    std::vector<int> v;
    for (size_t i = 0; i < N; ++i) v.push_back((int)i);
    auto end = high_resolution_clock::now();
    return duration_cast<milliseconds>(end - start).count();
}

long long bench_with_reserve(size_t N) {
    auto start = high_resolution_clock::now();
    std::vector<int> v;
    v.reserve(N);
    for (size_t i = 0; i < N; ++i) v.push_back((int)i);
    auto end = high_resolution_clock::now();
    return duration_cast<milliseconds>(end - start).count();
}

int main() {
    const size_t N = 5'000'000;
    auto t1 = bench_no_reserve(N);
    auto t2 = bench_with_reserve(N);
    std::cout << "no_reserve: " << t1 << " ms\n";
    std::cout << "with_reserve: " << t2 << " ms\n";
    std::cout << "exercise10: OK (compare times)\n";
    return 0;
}