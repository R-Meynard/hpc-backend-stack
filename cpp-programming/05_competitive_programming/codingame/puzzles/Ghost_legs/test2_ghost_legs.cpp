#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>


// Display all data of the game vector
void printV(std::vector<std::vector<char>>& v){

    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[i].size(); j++){
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}

void printVector(std::vector<std::vector<char>>& v){

        if(!v.empty()){
            std::cout << "Data read from file : " << std::endl;
            for(const auto& row : v){
                for(char c : row){
                    std::cout << c << " ";
                }
                std::cout << std::endl;
            }
        }else{
            std::cout << "The grid is empty, either the file was not found or it was." << std::endl;
        }
}

// find a character in a 2D vector of char
std::pair<int, int> findCharacter(std::vector<std::vector<char>>& grid, char target){
    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[i].size(); j++){
            if(grid[i][j] == target){
                return {i, j};
            }
        }
    }
    return {-1, -1}; // return a pair of -1 if not found
}

// function to read a file and to store data in a vector 2D
std::vector<std::vector<char>> read_test_game(const std::string test_game_file){

    std::vector<std::vector<char>> game;
    // Open and read the file
    std::ifstream file_to_read_test_game(test_game_file);

    // Check if the file was opened successfully
    if(!file_to_read_test_game){
        std::cout << "Unable to open file" << std::endl;
    }

    // Read each line of the file character by character
    std::string line;
    while(std::getline(file_to_read_test_game, line)){
        std::vector<char> tmp_vector;
        for(char c : line){
                tmp_vector.push_back(c);
        }
        // game vector to store the ghost legs
        game.push_back(tmp_vector);
    }

    // Close the file
    file_to_read_test_game.close();
    return game;
}

int main(int argc, char* argv[]){

    std::vector<std::vector<char>> test_game = read_test_game("01_sample.txt");
    // Display all data of the game vector
    printVector(test_game);
    char start = 'A';
    std::pair<int, int> p = findCharacter(test_game, start);
    std::cout << p.first << " : " << p.second << std::endl;
    return 0;
}