/*
Exercice 06 — Multithreading : mutex vs atomic

Objectif :
- Implémenter deux counters :
  - safe_with_mutex: incrémenté par N threads en protégeant avec mutex.
  - safe_with_atomic: incrémenté par N threads en utilisant std::atomic<int>.
- Comparer la valeur finale (doit être threadsafe).

Tâches :
- Lancer 8 threads, chaque thread fait 100000 incréments.
- Vérifier que les deux compteurs valent expected.

Indices :
- Utiliser std::thread, std::mutex, std::atomic.
*/

#include <thread>
#include <vector>
#include <iostream>
#include <mutex>
#include <atomic>
#include <cassert>

int main() {
    const int num_threads = 8;
    const int increments = 100000;

    // mutex version
    int counter_mutex = 0;
    std::mutex m;

    auto worker_mutex = [&](){
        for (int i = 0; i < increments; ++i) {
            std::lock_guard<std::mutex> lk(m);
            ++counter_mutex;
        }
    };

    // atomic version
    std::atomic<int> counter_atomic{0};

    auto worker_atomic = [&](){
        for (int i = 0; i < increments; ++i) {
            counter_atomic.fetch_add(1, std::memory_order_relaxed);
        }
    };

    // run mutex test
    {
        std::vector<std::thread> threads;
        for (int i = 0; i < num_threads; ++i) threads.emplace_back(worker_mutex);
        for (auto& t : threads) t.join();
        assert(counter_mutex == num_threads * increments);
    }

    // run atomic test
    {
        std::vector<std::thread> threads;
        for (int i = 0; i < num_threads; ++i) threads.emplace_back(worker_atomic);
        for (auto& t : threads) t.join();
        assert(counter_atomic.load() == num_threads * increments);
    }

    std::cout << "exercise06: OK (mutex and atomic produced correct counts)\n";
    return 0;
}