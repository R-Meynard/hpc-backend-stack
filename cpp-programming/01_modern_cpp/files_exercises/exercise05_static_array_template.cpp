/*
Exercice 05 — Templates & constexpr : StaticArray

Objectif :
- Implémenter un template StaticArray<T,N> avec :
  - operator[] (checked in debug via assert),
  - constexpr size(),
  - begin()/end() (raw pointer iterators),
  - constexpr sum() for arithmetic T (C++17 allow constexpr algorithms a bit limited but keep simple).

Contraintes :
- Pas d'utilisation de std::array (implémenter toi-même).
- size() doit être constexpr et évaluable à la compilation.

Indices :
- Utiliser T data[N]; pour stockage.
*/

#include <cassert>
#include <iostream>
#include <type_traits>

template<typename T, std::size_t N>
struct StaticArray {
    T data[N];

    constexpr std::size_t size() const noexcept { return N; }

    T& operator[](std::size_t i) {
        assert(i < N);
        return data[i];
    }
    const T& operator[](std::size_t i) const {
        assert(i < N);
        return data[i];
    }

    T* begin() noexcept { return data; }
    T* end() noexcept { return data + N; }
    const T* begin() const noexcept { return data; }
    const T* end() const noexcept { return data + N; }

    // constexpr sum (only enabled for arithmetic types)
    template<typename U=T>
    typename std::enable_if<std::is_arithmetic<U>::value, U>::type
    constexpr sum() const {
        U s = U{};
        for (std::size_t i = 0; i < N; ++i) s += data[i];
        return s;
    }
};

int main() {
    StaticArray<int, 4> arr;
    arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4;
    static_assert(StaticArray<int,4>().size() == 4, "size constexpr");
    assert(arr.sum() == 10);
    int total = 0;
    for (auto v : arr) total += v;
    assert(total == 10);
    std::cout << "exercise05: OK\n";
    return 0;
}