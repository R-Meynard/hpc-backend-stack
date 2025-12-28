/*
Exercice 02 — Move semantics et gestion de ressource

Objectif :
- Implémenter une classe Resource qui gère un bloc mémoire (new/delete).
- Implémenter constructeur, destructeur, copy ctor, copy assign, move ctor, move assign.
- Surveiller les opérations via un compteur (static) pour observer copies vs moves.

Contraintes :
- Gestion RAII correcte (pas de double-free).
- copy doit faire deep copy.
- move doit transférer l'ownership sans allouer.

Indices :
- Après un move, l'objet source doit être dans un état valide (ptr == nullptr).
*/

#include <iostream>
#include <cstring>
#include <cassert>

struct Resource {
    char* data{nullptr};
    size_t size{0};
    static int constructions;
    static int copies;
    static int moves;
    static int destructions;

    Resource() { ++constructions; }

    Resource(const char* s) {
        ++constructions;
        size = std::strlen(s) + 1;
        data = new char[size];
        std::memcpy(data, s, size);
    }

    // Copy ctor
    Resource(const Resource& other) {
        ++copies;
        size = other.size;
        if (size) {
            data = new char[size];
            std::memcpy(data, other.data, size);
        } else {
            data = nullptr;
        }
    }

    // Move ctor
    Resource(Resource&& other) noexcept {
        ++moves;
        // IMPLEMENT_ME (steal resources)
        data = other.data;
        size = other.size;
        other.data = nullptr;
        other.size = 0;
    }

    Resource& operator=(const Resource& other) {
        if (this != &other) {
            ++copies;
            delete[] data;
            size = other.size;
            if (size) {
                data = new char[size];
                std::memcpy(data, other.data, size);
            } else {
                data = nullptr;
            }
        }
        return *this;
    }

    Resource& operator=(Resource&& other) noexcept {
        if (this != &other) {
            ++moves;
            delete[] data;
            // IMPLEMENT_ME (steal resources)
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
        }
        return *this;
    }

    ~Resource() {
        ++destructions;
        delete[] data;
    }

    const char* c_str() const { return data ? data : ""; }
};

int Resource::constructions = 0;
int Resource::copies = 0;
int Resource::moves = 0;
int Resource::destructions = 0;

int main() {
    {
        Resource r1("hello");
        Resource r2 = r1; // copy
        Resource r3 = std::move(r1); // move

        assert(std::strcmp(r2.c_str(), "hello") == 0);
        assert(std::strcmp(r3.c_str(), "hello") == 0);
        // r1 must be empty after move
        assert(std::strcmp(r1.c_str(), "") == 0);
    }

    std::cout << "Constructions: " << Resource::constructions << "\n";
    std::cout << "Copies: " << Resource::copies << "\n";
    std::cout << "Moves: " << Resource::moves << "\n";
    std::cout << "Destructions: " << Resource::destructions << "\n";
    std::cout << "exercise02: OK\n";
    return 0;
}