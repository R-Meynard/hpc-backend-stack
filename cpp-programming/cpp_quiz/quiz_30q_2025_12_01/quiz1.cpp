#include <iostream>

// Question 1 : Quelle est la difference entre une reference (T&) et un pointeur (T*) en C++ ?
// Réponse : 
// Une référence est un alias pour une variable existante et ne peut être nulle et ne peut pas être réassignée.
// Un pointeur est une variable qui stocke l'adresse d'une autre variable, peut être nulle et peut être réassignée pour pointer vers d'autres adresses.

// Question 2 : Qu'est-ce que le Rule of Three / Five / Zero en C++ ?
// Réponse :
//      - Le Rule of three : Si une classe requiert un destructreur, un constructeur de copie ou un opérateur d'affectation par copie définis par l'utilisateur, elle requiert presque certainement les trois.
//          * Le Rule of Three stipule que si une classe définit un destructeur, un constructeur de copie ou un opérateur d'affectation de copie, elle doit probablement définir les trois.
//      - Le Rule of Five : étant donné que la présence d'un destructeur, d'un constructeur de copie ou d'un opérateur d'affectation de copie défini par l'utilisateur (include = default ou = delete declared) empêche la définition implicite du constructeur de déplacement et de l'opérateur d'affectation de déplacement, toute classe pour laquelle la sémantique de déplacement est souhaitable doit déclarer les cinq fonctions membres spéciales.
//          * Le Rule of Five :  est une extension du Rule of Three qui stipule que si une classe définit un destructeur, un constructeur de copie, un opérateur d'affectation de copie, un constructeur de déplacement ou un opérateur d'affectation de déplacement, elle doit probablement définir les cinq.
//      - Le Rule of Zero stipule que si une classe n'a pas besoin de définir de destructeur, de constructeur de copie, d'opérateur d'affectation de copie, de constructeur de déplacement ou d'opérateur d'affectation de déplacement, elle ne doit pas les définir.
//      - Le Rule of Zero : est une extension du Rule of Three qu istipule que si une classe n'a pas besoin de définir un destructeur, un constructeur  de copie ou un opérateur d'affectation de copie, elle ne doit pas les définir.

// Question 3 : Explique la sémantique de copie vs sémantique de déplacement (copy vs move). Quand définir un constructeur move ?
// Réponse : 
// La sémantique de copie crée une nouvelle instance d'un objet en dupliquant les données de l'objet source
// La sémantique de déplacement transfère la propriété d'un objet source à un nouvel objet sans dupliquer les données, en laissant l'objet source dans un état valide mais indéfini.