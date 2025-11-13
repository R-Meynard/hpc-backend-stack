#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>


// Display all data of the game vector
void printV(std::vector<std::vector<std::string>>& v){

    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[i].size(); j++){
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
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
        // Create a temporary vector for words in the current line
        std::vector<std::string> tmp_vector;
        // Use stringstream to split the line into words
        std::stringstream ss(line);
        std::string word;
        std::string current_part;
        char ch;
        while (ss.get(ch)){
            if(isspace(ch)){
                if(!current_part.empty() && !isspace(current_part.back())){
                    tmp_vector.push_back(current_part); // Store the word
                    current_part.clear();
                }
            }else{
                if(!current_part.empty() && isspace(current_part.back())){
                    tmp_vector.push_back(current_part); // Store the whitespace
                    current_part.clear(); 
                }
            }
            current_part += ch;
        }

        if(!current_part.empty()){
            tmp_vector.push_back(current_part);
        }
        // game vector to store the ghost legs
        game.push_back(tmp_vector);
    }

    // Close the file
    file_to_read_test_game.close();
    return game;
}

int main(int argc, char* argv[]){

    std::vector<std::vector<std::string>> test_game = read_test_game("01_sample.txt");
    // Display all data of the game vector
    printV(test_game);
    std::string start = "A";
    std::pair<int, int> p = findCharacter(test_game, start);
    std::cout << p.first << " : " << p.second << std::endl;

    // 2. Display the 2D vector using nested loops
    std::cout << "Displaying the 2D vector of strings:" << std::endl;

    for (size_t i = 0; i < test_game.size(); ++i) { // Outer loop for rows
      std::cout << " " << i << ": ";
        for (size_t j = 0; j < test_game[i].size(); ++j) { // Inner loop for elements
            std::cout << test_game[i][j] << " ";
        }
        std::cout << std::endl; // Newline after each row
    }
    return 0;
}