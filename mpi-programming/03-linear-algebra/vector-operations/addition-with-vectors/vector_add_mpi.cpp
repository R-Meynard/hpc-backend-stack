#include <iostream>
#include <vector>
#include <mpi.h>
#include <cmath>

int main(int argc, char* argv[]) {
    // Initialiser MPI
    MPI_Init(&argc, &argv);
    
    // Obtenir le nombre de processus et le rang du processus actuel
    int world_size, world_rank;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
    
    // Taille du vecteur
    int n = 1000;
    
    // Vecteurs locaux (pour chaque processus)
    std::vector<float> local_a, local_b, local_c;
    
    // Processus master (rank 0) initialise les données
    if (world_rank == 0) {
        std::cout << "Addition de 2 vecteurs avec MPI" << std::endl;
        std::cout << "Nombre de processus: " << world_size << std::endl;
        std::cout << "Taille du vecteur: " << n << std::endl;
        std::cout << "Éléments par processus: " << n / world_size << std::endl;
    }
    
    // Calculer le nombre d'éléments pour chaque processus
    int local_n = n / world_size;
    
    // Allouer la mémoire pour les vecteurs locaux
    local_a.resize(local_n);
    local_b.resize(local_n);
    local_c.resize(local_n);
    
    // Vecteurs globaux (seulement sur le processus master)
    std::vector<float> global_a(n), global_b(n), global_c(n);
    
    // Master initialise les vecteurs globaux
    if (world_rank == 0) {
        for (int i = 0; i < n; i++) {
            global_a[i] = static_cast<float>(i);
            global_b[i] = static_cast<float>(i * 2);
        }
        std::cout << "\nPremiers éléments de A: ";
        for (int i = 0; i < 5; i++) {
            std::cout << global_a[i] << " ";
        }
        std::cout << "\nPremiers éléments de B: ";
        for (int i = 0; i < 5; i++) {
            std::cout << global_b[i] << " ";
        }
        std::cout << std::endl;
    }
    
    // Distribuer les données aux processus (scatter)
    MPI_Scatter(global_a.data(), local_n, MPI_FLOAT, 
                local_a.data(), local_n, MPI_FLOAT, 
                0, MPI_COMM_WORLD);
    
    MPI_Scatter(global_b.data(), local_n, MPI_FLOAT, 
                local_b.data(), local_n, MPI_FLOAT, 
                0, MPI_COMM_WORLD);
    
    // Chaque processus effectue son calcul local
    for (int i = 0; i < local_n; i++) {
        local_c[i] = local_a[i] + local_b[i];
    }
    
    // Rassembler les résultats (gather)
    MPI_Gather(local_c.data(), local_n, MPI_FLOAT, 
               global_c.data(), local_n, MPI_FLOAT, 
               0, MPI_COMM_WORLD);
    
    // Master affiche les résultats
    if (world_rank == 0) {
        std::cout << "\nRésultats (premiers 10 éléments):" << std::endl;
        for (int i = 0; i < 10; i++) {
            std::cout << global_a[i] << " + " << global_b[i] 
                      << " = " << global_c[i] << std::endl;
        }
        
        // Vérifier les résultats
        bool correct = true;
        for (int i = 0; i < n; i++) {
            if (std::fabs(global_c[i] - (global_a[i] + global_b[i])) > 1e-5) {
                correct = false;
                break;
            }
        }
        
        if (correct) {
            std::cout << "\n✅ Tous les calculs sont corrects!" << std::endl;
        } else {
            std::cout << "\n❌ Erreurs détectées dans les calculs!" << std::endl;
        }
    }
    
    // Finaliser MPI
    MPI_Finalize();
    
    return 0;
}