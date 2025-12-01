# Exercices pratiques C++ — Préparation entretien

Contenu
- 10 exercices (fichiers .cpp) ciblant des sujets courants en entretien technique C++ :
  1. Types et opérateurs (Vector2)
  2. Move semantics et gestion de ressource
  3. Smart pointers et cycles
  4. STL & algorithmes (top-k)
  5. Templates & constexpr (StaticArray)
  6. Multithreading : mutex vs atomic
  7. RAII : ScopedTimer
  8. Polymorphisme et slicing (Shape/clone)
  9. Undefined Behavior — détection et correction
  10. Performance simple : reserve vs push_back

Compilation
- Utilise g++ ou clang++ (C++17 recommandé).
- Exemple :
  - g++ -std=c++17 -O2 exercise01_vector2.cpp -o ex01
  - ./ex01

Objectif pédagogique
- Chaque fichier contient un petit test dans main() qui affiche un résultat ou utilise assert.
- Lis l'énoncé en haut du fichier, complète les fonctions marquées TODO et recompile.

Souhaites-tu :
- Que je génère un repo GitHub avec ces fichiers ?
- Des corrections/révisions pour ton implémentation ?
- Des tests unitaires (Google Test) ou un Makefile/CMakeLists.txt ?

Bonne pratique : implémente d'abord, puis exécute les tests et poste ton code si tu veux une relecture détaillée.