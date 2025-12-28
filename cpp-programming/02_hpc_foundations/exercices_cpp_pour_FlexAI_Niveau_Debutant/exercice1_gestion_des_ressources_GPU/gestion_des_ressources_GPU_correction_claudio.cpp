#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

class GPUResource {
private:
    std::string name;
    int memoryGB;
    bool isAvailable;
    
public:
    // Constructeur
    GPUResource(std::string gpuName, int memory) 
        : name(gpuName), memoryGB(memory), isAvailable(true) {
        // Par défaut, un GPU est disponible à la création
    }
    
    // Getters
    bool getAvailability() const {
        return isAvailable;
    }
    
    std::string getName() const {
        return name;
    }
    
    int getMemory() const {
        return memoryGB;
    }
    
    // Setter pour la disponibilité
    void setAvailability(bool available) {
        isAvailable = available;
    }
    
    // Affichage des informations du GPU
    void displayInfo() const {
        std::cout << "GPU: " << std::setw(15) << std::left << name 
                  << " | Mémoire: " << std::setw(3) << memoryGB << " GB"
                  << " | État: " << (isAvailable ? "Disponible" : "Occupé") << std::endl;
    }
};

// Fonction utilitaire pour afficher un séparateur
void printSeparator() {
    std::cout << std::string(50, '-') << std::endl;
}

// Fonction pour compter les GPUs disponibles
int countAvailableGPUs(const std::vector<GPUResource>& cluster) {
    int count = 0;
    for (const auto& gpu : cluster) {
        if (gpu.getAvailability()) {
            count++;
        }
    }
    return count;
}

// Fonction pour afficher le statut du cluster
void displayClusterStatus(const std::vector<GPUResource>& cluster) {
    std::cout << "\n=== ÉTAT DU CLUSTER GPU ===" << std::endl;
    printSeparator();
    
    for (size_t i = 0; i < cluster.size(); ++i) {
        std::cout << "GPU " << (i + 1) << " - ";
        cluster[i].displayInfo();
    }
    
    printSeparator();
    int available = countAvailableGPUs(cluster);
    int total = cluster.size();
    std::cout << "Résumé: " << available << "/" << total << " GPUs disponibles" << std::endl;
    
    // Calcul de la mémoire totale disponible
    int totalAvailableMemory = 0;
    for (const auto& gpu : cluster) {
        if (gpu.getAvailability()) {
            totalAvailableMemory += gpu.getMemory();
        }
    }
    std::cout << "Mémoire disponible totale: " << totalAvailableMemory << " GB" << std::endl;
}

// Fonction pour trouver un GPU disponible avec suffisamment de mémoire
int findAvailableGPU(const std::vector<GPUResource>& cluster, int minMemoryGB) {
    for (size_t i = 0; i < cluster.size(); ++i) {
        if (cluster[i].getAvailability() && cluster[i].getMemory() >= minMemoryGB) {
            return static_cast<int>(i);
        }
    }
    return -1; // Aucun GPU disponible trouvé
}

int main() {
    std::cout << "=== SYSTÈME DE GESTION GPU FLEXAI ===" << std::endl;
    
    // Créer un vecteur de GPUs (cluster)
    std::vector<GPUResource> gpuCluster;
    
    // Ajouter 3 GPUs différents avec leurs spécifications réelles
    gpuCluster.emplace_back("NVIDIA A100", 40);   // GPU haut de gamme pour l'IA
    gpuCluster.emplace_back("NVIDIA H100", 80);   // Dernière génération NVIDIA
    gpuCluster.emplace_back("AMD MI250", 128);    // GPU AMD pour calcul intensif
    
    // Afficher l'état initial du cluster
    std::cout << "\n🚀 Initialisation du cluster..." << std::endl;
    displayClusterStatus(gpuCluster);
    
    // Simulation d'allocation de ressources
    std::cout << "\n📋 SIMULATION D'ALLOCATION DE RESSOURCES" << std::endl;
    printSeparator();
    
    // Scénario 1: Lancer un job d'entraînement qui nécessite 60GB
    std::cout << "🔍 Recherche d'un GPU avec au moins 60GB pour un job d'entraînement..." << std::endl;
    int gpuIndex = findAvailableGPU(gpuCluster, 60);
    
    if (gpuIndex != -1) {
        std::cout << "✅ GPU trouvé: " << gpuCluster[gpuIndex].getName() 
                  << " (Index: " << gpuIndex << ")" << std::endl;
        gpuCluster[gpuIndex].setAvailability(false);
        std::cout << "🔒 GPU alloué pour le job d'entraînement" << std::endl;
    } else {
        std::cout << "❌ Aucun GPU disponible avec suffisamment de mémoire" << std::endl;
    }
    
    // Scénario 2: Marquer le premier GPU comme occupé
    std::cout << "\n🔒 Allocation du premier GPU pour un job d'inférence..." << std::endl;
    if (gpuCluster[0].getAvailability()) {
        gpuCluster[0].setAvailability(false);
        std::cout << "✅ " << gpuCluster[0].getName() << " alloué" << std::endl;
    } else {
        std::cout << "⚠️  " << gpuCluster[0].getName() << " déjà occupé" << std::endl;
    }
    
    // Afficher l'état après allocations
    displayClusterStatus(gpuCluster);
    
    // Scénario 3: Libération d'un GPU
    std::cout << "\n🔓 LIBÉRATION DE RESSOURCES" << std::endl;
    printSeparator();
    std::cout << "Job d'entraînement terminé, libération du GPU..." << std::endl;
    
    if (gpuIndex != -1) {
        gpuCluster[gpuIndex].setAvailability(true);
        std::cout << "✅ " << gpuCluster[gpuIndex].getName() << " libéré" << std::endl;
    }
    
    // État final
    displayClusterStatus(gpuCluster);
    
    // Statistiques finales
    std::cout << "\n📊 STATISTIQUES FINALES" << std::endl;
    printSeparator();
    
    int totalMemory = 0;
    int availableMemory = 0;
    int occupiedGPUs = 0;
    
    for (const auto& gpu : gpuCluster) {
        totalMemory += gpu.getMemory();
        if (gpu.getAvailability()) {
            availableMemory += gpu.getMemory();
        } else {
            occupiedGPUs++;
        }
    }
    
    double utilizationRate = (double)occupiedGPUs / gpuCluster.size() * 100;
    
    std::cout << "Nombre total de GPUs: " << gpuCluster.size() << std::endl;
    std::cout << "GPUs occupés: " << occupiedGPUs << std::endl;
    std::cout << "Taux d'utilisation: " << std::fixed << std::setprecision(1) 
              << utilizationRate << "%" << std::endl;
    std::cout << "Mémoire totale: " << totalMemory << " GB" << std::endl;
    std::cout << "Mémoire disponible: " << availableMemory << " GB" << std::endl;
    
    std::cout << "\n✨ Simulation terminée avec succès!" << std::endl;
    
    return 0;
}

/*
POINTS CLÉS DE CETTE IMPLÉMENTATION :

1. **Encapsulation**: Les attributs sont privés, accès via getters/setters
2. **Constructeur avec initialisation**: Utilisation de la liste d'initialisation
3. **Const correctness**: Les méthodes qui ne modifient pas l'objet sont const
4. **STL**: Utilisation de std::vector pour stocker les GPUs
5. **Fonctions utilitaires**: Code modulaire et réutilisable
6. **Gestion d'erreurs**: Vérification des conditions avant allocation
7. **Interface utilisateur**: Affichage formaté et informatif

AMÉLIORATIONS POSSIBLES :
- Ajouter la gestion d'exceptions
- Implémenter un système de réservation temporaire
- Ajouter des métriques de performance
- Sauvegarder l'état du cluster dans un fichier
- Ajouter des logs d'activité
- Implémenter un système de priorités pour les jobs
*/