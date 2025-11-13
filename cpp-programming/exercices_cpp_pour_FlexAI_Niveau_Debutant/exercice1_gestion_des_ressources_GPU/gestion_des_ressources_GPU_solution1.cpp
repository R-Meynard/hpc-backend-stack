#include <iostream>
#include <vector>
#include <string>

class GPUResource {
    private:
        std::string name;
        int memoryGB;
        bool isAvailable = true;
    public:
        // TODO: Implementer le constructeur
        GPUResource(std::string gpuName, int memory);

        // TODO: Implementer les getters/setters
        bool getAvailability() const;
        void setAvailability(bool available);
        std::string getName() const;
        int getMemory() const;

        //TODO: Implementer l affichage des informations
        void displayInfo() const;
};

GPUResource::GPUResource(std::string gpuName, int memory){
    name = gpuName;
    memoryGB = memory;
}

bool GPUResource::getAvailability() const{
    return isAvailable;
}

void GPUResource::setAvailability(bool available){
    isAvailable = available;
}

std::string GPUResource::getName() const{
    return name;
};

int GPUResource::getMemory() const {
    return memoryGB;
}

void GPUResource::displayInfo() const {
    std::cout << "The name of this GPUResource is : " << getName() << std::endl;
    std::cout << "This GPUResource has : " << getMemory() << " GB of memory"<<std::endl;
    std::cout << "Is this GPUResource is available ?  : " << getAvailability() <<std::endl;
}

int main(){
    // Creer un vecteur de GPUs
    std::vector<GPUResource> gpuCluster;
    GPUResource gpu1("NVIDIA A100", 1500);
    GPUResource gpu2("H100", 4430);
    GPUResource gpu3("AMD MI250", 5680);
    gpuCluster.push_back(gpu1);
    gpuCluster.push_back(gpu2);
    gpuCluster.push_back(gpu3);

    for(int i = 0; i < gpuCluster.size(); i++){
        gpuCluster[i].displayInfo();
    }

    gpuCluster[0].setAvailability(false);

    int nbAvailableClusters = 0;
    for(int i = 0; i < gpuCluster.size(); i++){
        if(true == gpuCluster[i].getAvailability()){
            nbAvailableClusters++;
        }
    }

    std::cout << "The number of clusters available is : "<< nbAvailableClusters << std::endl;
}
