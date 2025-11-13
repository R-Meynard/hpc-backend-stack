#include <algorithm>
#include <cmath>
#include <iostream>
#include <mkl.h>
#include <string>
#include <vector>

int flatlandSpaceStations(int n, std::vector<int> &c) {
  int maxDistance = 0;

  std::vector<int> storeDistance;
  std::vector<int> tmpDistance;
  int computeDistance;
  int minDistance;
  for (int i = 0; i < n; i++) {
    for (int ii = 0; ii < c.size(); ii++) {
      if (i == c[ii]) {
        computeDistance = 0;
        tmpDistance.push_back(computeDistance);
        break;
      } else {
        computeDistance = abs(i - c[ii]);
        tmpDistance.push_back(computeDistance);
      }
    }
    minDistance = *std::min_element(tmpDistance.begin(), tmpDistance.end());
    storeDistance.push_back(minDistance);
    tmpDistance.clear();
  }

  maxDistance = *std::max_element(storeDistance.begin(), storeDistance.end());

  return maxDistance;
}

void printDistanceSpaceStation(std::vector<int> &d) {
  std::cout << "The distance the nearest space station for each city is listed "
               "below : "
            << std::endl;
  for (int i = 0; i < d.size(); i++) {
    std::cout << d[i] << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char *argv[]) {

  int number_of_cities;

  // Case 1
  number_of_cities = 5;

  std::vector<int> c = {0, 4};
  for (int i = 0; i < c.size(); i++) {
    std::cout << "c[" << i << "] = " << c[i] << " ";
  }
  std::cout << std::endl;

  int maxFound;
  maxFound = flatlandSpaceStations(number_of_cities, c);
  std::cout << "maxFound is : " << maxFound << std::endl;
  return 0;
}