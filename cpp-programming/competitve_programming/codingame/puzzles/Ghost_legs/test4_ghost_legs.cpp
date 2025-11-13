#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <sstream>

// Function to split a string into words and spaces
std::vector<std::string> splitLine(const std::string& line) {
    std::vector<std::string> parts;
    std::string::size_type pos = 0;

    while (pos < line.size()) {
        // Find the next word (first non-whitespace character)
        std::string::size_type word_start = line.find_first_not_of(" \t\n\r", pos);
        
        // Find the end of the word
        std::string::size_type word_end = line.find_first_of(" \t\n\r", word_start);
        
        if (word_start != std::string::npos) {
            parts.push_back(line.substr(word_start, word_end - word_start));
        }

        // Find the start of the next space
        std::string::size_type space_start = word_end;
        if (space_start != std::string::npos) {
            std::string::size_type space_end = line.find_first_not_of(" \t\n\r", space_start);
            parts.push_back(line.substr(space_start, space_end - space_start));
            pos = space_end;
        } else {
            break;
        }
    }
    return parts;
}

// function to read a file and to store data in a vector 2D
std::vector<std::vector<std::string>> read_test_game(const std::string test_game_file){

    std::vector<std::vector<std::string>> game;
    // Open and read the file
    std::ifstream file_to_read_test_game(test_game_file);

    // Check if the file was opened successfully
    if(!file_to_read_test_game){
        std::cout << "Unable to open file" << std::endl;
    }

    // Read each line of the file character by character
    std::string line;
    while(std::getline(file_to_read_test_game, line)){
        // game vector to store the ghost legs
        game.push_back(splitLine(line));
    }

    // Close the file
    file_to_read_test_game.close();
    return game;
}

// find a character in a 2D vector of char
std::pair<int, int> findCharacter(std::vector<std::vector<std::string>>& grid, std::string target){
    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[i].size(); j++){
            if(grid[i][j] == target){
                return {i, j};
            }
        }
    }
    return {-1, -1}; // return a pair of -1 if not found
}

void printVector(std::vector<std::vector<std::string>>& v){

        if(!v.empty()){
            std::cout << "Data read from file : " << std::endl;
            for(const auto& row : v){
                for(std::string word : row){
                    std::cout << word << " ";
                }
                std::cout << std::endl;
            }
        }else{
            std::cout << "The grid is empty, either the file was not found or it was." << std::endl;
        }
}

int main(int argc, char* argv[]){

    std::vector<std::vector<std::string>> test_game = read_test_game("01_sample.txt");
    // Display all data of the game vector
    printVector(test_game);
    std::string start = "A";
    std::pair<int, int> p = findCharacter(test_game, start);
    std::cout << p.first << " : " << p.second << std::endl;
    return 0;
}