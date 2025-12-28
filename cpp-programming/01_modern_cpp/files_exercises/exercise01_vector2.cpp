/*
Exercice 01 — Vector2 basique et opérateurs

Objectif :
- Implémenter une petite classe Vector2 avec x,y (double).
- Fournir constructeurs, opérateur+(Vector2), opérateur*(double), opérateur==.
- Implémenter une méthode length() et normalize() (modifie en place).
- Écrire un petit test dans main().

Contraintes :
- Ne pas utiliser std::complex.
- Respecter la sémantique valeur (copies par défaut ok).

Indices :
- length() retourne sqrt(x*x + y*y).
- normalize() divise x,y par length() si length() > epsilon.

TODO: compléter les méthodes marquées "IMPLEMENT_ME".
*/

#include <cmath>
#include <cassert>
#include <iostream>

struct Vector2 {
    double x{0}, y{0};

    Vector2() = default;
    Vector2(double xx, double yy) : x(xx), y(yy) {}

    // Addition
    Vector2 operator+(const Vector2& other) const {
        // IMPLEMENT_ME
        return Vector2(x + other.x, y + other.y);
    }

    // Scalar multiplication
    Vector2 operator*(double s) const {
        // IMPLEMENT_ME
        return Vector2(x * s, y * s);
    }

    bool operator==(const Vector2& other) const {
        const double eps = 1e-9;
        return std::fabs(x - other.x) < eps && std::fabs(y - other.y) < eps;
    }

    double length() const {
        // IMPLEMENT_ME
        return std::sqrt(x*x + y*y);
    }

    void normalize() {
        double len = length();
        if (len > 1e-12) {
            x /= len;
            y /= len;
        }
    }
};

int main() {
    Vector2 a(3.0, 4.0);
    assert(a.length() == 5.0);

    Vector2 b(1.0, 2.0);
    Vector2 c = a + b;
    assert(c == Vector2(4.0, 6.0));

    Vector2 d = b * 2.5;
    assert(d == Vector2(2.5, 5.0));

    a.normalize();
    double len = a.length();
    // length should be 1 after normalize
    assert(std::fabs(len - 1.0) < 1e-9);

    std::cout << "exercise01: OK\n";
    return 0;
}