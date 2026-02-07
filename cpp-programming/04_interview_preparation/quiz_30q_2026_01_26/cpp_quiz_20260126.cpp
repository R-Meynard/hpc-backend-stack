#include <iostream>

// Exemple  d un membre d une classe declare mutable
class X
{
    public: 
        bool Getflag() const {
            m_accessCount++;
            std::cout << "m_accessCount = " << m_accessCount << std::endl;
            return m_flag;
        }
    private:
        bool m_flag = 1;
        mutable int m_accessCount = 0;
};


int main(){
    // Question 1 : Que represente le mot-cle constexpr en C++ ?
    // Answer 
    // Une variable dont la valeur est connue a la compilation : good
    // Explicaation :
    // constexpr impose que l expression puisse etre evaluee a la compilation,
    // amelioration les optimisations

    // Question 2 : Quel est l effet du mot-cle mutable dans une classe ?
    // Answer 
    // Permettre la modification d un membre meme dans une methode const
    // Exemple d utilisation d un membre mutable dans une classe
    X x1object;
    bool flagX1Object;
    flagX1Object = x1object.Getflag();
    std::cout << "flagX1Object = " << flagX1Object << std::endl;
    // Explication :
    // mutable autorise la modification d un attribut meme dans une methode marquee const

    // Question 3 : Quel conteneur garantit l access en O(1) amorti pour la recherche  ?
    // Answer 
    // std::unordered_map
    // Explication
    // std::unordered_map utilise une table de hachage, offrant une recherche amortie en O(1)

    // Question 4 : Quel est le comportement de std::move ?
    // Answer 
    // Convertit un objet en rvalue
    // Explication 
    // std::move effectue un cast vers une rvalue, permettant les operations de deplacements

    // Question 5 : Quel est l avantage de emplace_back sur push_back ?
    // Answer 
    // Construit l objet directement dans le conteneur
    // Explication
    // emplace_back construit l objet in-place, evitant une copie ou un move supplementaire

    // Question 6 : Quel est le role de virtual dans une classe ?
    // Answer :
    // Activer le polymorphisme dynamique
    // Explication
    // Le mot cle virtual active le dispatch dynamique pour les methodes

    // Question 7 : Que fait std::unique_ptr ?
    // Answer 
    // Gere une ressource avec propriete une exclusive
    // Explication
    // std::unique_ptr garantit qu un seul pointeur possede la ressource

    // Question 8 : Quel est l effet de override ?
    // Answer 
    // Verifie bien qu'une methode redefinit bien une methode virtuelle
    // Explication
    // Override force le compilateur a verifier qu une methode redefinit bien une methode virtuelle

    // Question 9: Quel est le type retourne par sizeof ?
    // Le resultat de l operateur sizeof est de type size_t, un type integral defini dans le fichier include <stddef.h>
    // Explication
    // sizeof retourne un size_t, type non signe utilise pour les tailles

    // Question 10 : Que represente RAII ?
    // Answer 
    // Gestion automatique des ressources via des objets
    // Explication
    // RAII signifie que la duree de vie d un objet gere automatiquement la ressource associee

    // Question 11 : Quel est l effet de = delete sur une fonction ?
    // Answer :
    // Interdire son utilisation
    // Explication
    // = delete supprime explicitement une fonction, empechant son appel

    // Question 12 : Quel conteneur garantit l ordre d insertion ?
    // Answer 
    // std::vector
    // Explication 
    // std::vector conserve l ordre d insertion

    // Question 13 : Que permet std::thread ?
    // Answer 
    // Gerer des signaux systeme : Faux
    // Bonne reponse : Creer un thread natif
    // Explication
    // std::thread permet de lancer et gerer un thread d execution

    // Question 14 : Quel est l interet de std::optional ?
    // Answer 
    // Representer une valeur potentiellement absente
    // Explication
    // std::optional encapsule une valeur qui peut être presente ou non

    // Question 15 : Que fait std::forward ?
    // Answer 
    // Convertit en lvalue : Faux
    // Bonne reponse : Preserve la valeur-categorie d un argument
    // Explication 
    // std::forward transmet un argument en conservant sa valeur-categorie (lvalue/rvalue)
}