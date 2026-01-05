#include <iostream>

class Buffer {
    private:
        int taille;
        int *tableau; 
    public:
        // Constructor by default
        Buffer(){
            std::cout << "I m the constructor by default of the class." << std::endl;
        }
        //Constructor with parameters
        Buffer(int *tab, int& sizeTab){
            taille = sizeTab;
            for(int i = 0; i < taille; i++){
                tableau[i] = tab[i];
            }
            std::cout << "Content of the dynamic array :" << std::endl;
            for(int i = 0; i < sizeTab; i++){
                std::cout <<tableau[i]<<" ";
            }
            std::cout << std::endl;
        }
        //Constructor by copy
        Buffer(const Buffer& buf):taille(buf.taille) {
            tableau = new int[buf.taille];
            for(int i = 0; i < buf.taille; i++){
                tableau[i] = buf.tableau[i];
            }
        }
};