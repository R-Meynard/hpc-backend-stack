/*
Exercice 08 — Slicing et polymorphisme

Objectif :
- Montrer le slicing : assignation d'un objet dérivé à une variable de type base par valeur.
- Corriger en utilisant pointeurs/smart pointers et un clone virtuel.

Tâches :
1) Compléter clone() virtuel pour les classes.
2) Montrer qu'en utilisant unique_ptr<Shape> on évite le slicing.

Indice :
- virtual std::unique_ptr<Shape> clone() const = 0;
*/

#include <iostream>
#include <memory>
#include <cassert>
#include <cmath>

struct Shape {
    virtual ~Shape() = default;
    virtual double area() const = 0;
    virtual std::unique_ptr<Shape> clone() const = 0;
};

struct Circle : Shape {
    double r;
    Circle(double rr) : r(rr) {}
    double area() const override { return M_PI * r * r; }
    std::unique_ptr<Shape> clone() const override {
        // IMPLEMENT_ME
        return std::make_unique<Circle>(r);
    }
};

int main() {
    // Slicing example
    Circle c(2.0);
    Shape* base_ptr = &c; // pointer ok
    assert(std::fabs(base_ptr->area() - (M_PI*4.0)) < 1e-9);

    // Avoid slicing with unique_ptr and clone
    std::unique_ptr<Shape> s = c.clone();
    assert(std::fabs(s->area() - (M_PI*4.0)) < 1e-9);

    std::cout << "exercise08: OK\n";
    return 0;
}