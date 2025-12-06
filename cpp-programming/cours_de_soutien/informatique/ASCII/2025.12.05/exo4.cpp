#include <iostream>


// Exercice 4 : renvoie une variable de type chaine de caracteres
std::string concatenateAllMinusculeMajusculesInCodeASCII() {
    std::string result;

    // Parcours des caracteres ASCII de 'a' (97) a 'z' (122) avec conversion explicite
    for (char c = 'a'; c <= 'z'; c++) {
        result += c;
        // Ajoute le code ASCII du caractere courant
        result += " (ASCII: " + std::to_string(static_cast<int>(c)) + ") ";
    }

    // Parcours des caracteres ASCII de 'A' (65) a 'Z' (90) avec conversion explicite
    for (char c = 'A'; c <= 'Z'; c++) {
        result += c;
        // Ajoute le code ASCII du caractere courant
        result += " (ASCII: " + std::to_string(static_cast<int>(c)) + ") ";
    }

    return result;
}
int main() {
    std::string result = concatenateAllMinusculeMajusculesInCodeASCII() ;
    std::cout << result << std::endl;
    return 0;
}