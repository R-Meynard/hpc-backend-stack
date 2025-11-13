#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>

// Function to search x in arr
// arr : input array
// X : element to be searched for
int search (int arr[], int n, int x){
    int result = -1;
    for(int i = 0; i < n; i++){
        if(x == arr[i]){
            result = i;
            break;
        }
    }
    return result;
}

int readFile(const std::string& filename, int arr[], int& n){
    std::ifstream read_array(filename);
    std::string data_line;
    int value;
    int count = 0;
    n = 0;
    std::getline(read_array, data_line);
    std::stringstream line_ss(data_line);
    while(line_ss >> value) count++;

    int data_array[count];
    std::stringstream data_ss(data_line);
    int index = 0;
    while(data_ss >> data_array[index]){
        index++;
    }

    for(int i = 0; i < count; i++){
        arr[i] = data_array[i];
    }

    n = index;
    return n;
    //delete[] data_array;
}
int main(int argc, char *argv[]){
    int n = 0;
    int arr1[1500];
    const std::string& file1 = "fileinput.txt";
    int size_array = readFile(file1, arr1, n);
    for(int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++){
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    int result = search (arr1, 1500,  217);
    std::cout << std::endl;
    std::cout << "result = " << result << std::endl;
    return 0;
}