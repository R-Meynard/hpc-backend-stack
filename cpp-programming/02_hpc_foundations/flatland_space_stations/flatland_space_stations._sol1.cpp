#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

int flatlandSpaceStations(int n, std::vector<int>& c){
    int maxDistance = 0;
    return maxDistance;
}

void printDistanceSpaceStation(std::vector<int>& d){
    std::cout << "The distance the nearest space station for each city is listed below : "<< std::endl;
    for(int i = 0; i < d.size(); i++){
        std::cout << d[i] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]){

    int number_of_cities,m_cities_with_stations;

    // Case 1 
    number_of_cities = 5;
    m_cities_with_stations = 2;

    std::vector<int> c = {0,4};
    for(int i = 0; i < c.size(); i++){
        std::cout << "c[" << i <<"] = " << c[i]<< " ";
    }
    std::cout << std::endl;

    std::vector<int> storeDistance;
    std::vector<int> tmpDistance;
    int computeDistance;
    int minDistance;
    for(int i = 0; i < number_of_cities; i++){
        for(int ii = 0; ii < m_cities_with_stations; ii++){
            if(i==c[ii]){
                computeDistance = 0;
                tmpDistance.push_back(computeDistance);
                break;
            }else{
                computeDistance = abs(i-c[ii]);
                tmpDistance.push_back(computeDistance);
            }
        }
        //printDistanceSpaceStation(tmpDistance);
        /*minDistance = *std::min_element(tmpDistance.begin(), tmpDistance.end());
        storeDistance.push_back(minDistance);*/
        minDistance = *std::min_element(tmpDistance.begin(), tmpDistance.end());
        //std::cout << "c["<< i << "] has distance "<< minDistance <<" km." << std::endl;
        storeDistance.push_back(minDistance);
        tmpDistance.clear();
    }

    printDistanceSpaceStation(storeDistance);
    return 0;
}