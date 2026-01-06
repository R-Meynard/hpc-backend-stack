#include <iostream>

class Buffer {
    private:
        int taille;
        int *tableau; 
    public:
        // Constructor by default
        Buffer() : taille(0), tableau(nullptr){
            std::cout << "Constructor by default of the class." << std::endl;
        }

        //Constructor with parameters
        Buffer(int *tab, int& sizeTab) : taille(sizeTab){
            tableau = new int [taille];
            for(int i = 0; i < taille; i++){
                tableau[i] = tab[i];
            }
            std::cout << "Content of the dynamic array :" << std::endl;
            for(int i = 0; i < sizeTab; i++){
                std::cout <<tableau[i]<<" ";
            }
            std::cout << std::endl;
        }

        //Constructor by copy - Deep Copy
        Buffer(const Buffer& buf) : taille(buf.taille) {
            if(buf.tableau != nullptr){
                tableau = new int[buf.taille];
                for(int i = 0; i < buf.taille; i++){
                    tableau[i] = buf.tableau[i];
                }
            }else {
                tableau = nullptr;
            }

            std::cout << "Constructor by copy called" << std::endl;
        }

        // Assignment operator (Rule of Three)
        Buffer& operator=(const Buffer& buf){
            std::cout << "Assignment operator called" << std::endl;
            if(this != &buf){ // protection against self-assignment
                delete[] tableau; // release the old memory

                taille = buf.taille;
                if( buf.tableau != nullptr){
                    tableau = new int [taille];
                    for(int i = 0; i < taille; i++){
                        tableau[i] = buf.tableau[i];
                    }
                }else {
                    tableau = nullptr;
                }
            }
            return *this;
        }
        // Destructor
        ~Buffer(){
            delete[] tableau;
            std::cout << "Destructor called - memory freed" << std::endl;
        }
};