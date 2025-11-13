#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <filesystem>

// Create a sample ghost legs ladder
// This function writes a 2D vector of strings to a specified file
// It takes the file path and the 2D vector as input
// Each inner vector is written to a new line in the file, with elements
void write_ghost_legs_ladder(const std::string& filePath, const std::vector<std::vector<std::string>>& ghostLegsLadder){
    // Check if the file exists and remove it
    if(std::filesystem::exists(filePath)){
        if(std::filesystem::remove(filePath)){
            std::cout << "File '" << filePath << "' was successfully removed. " << std::endl;
        } else {
            std::cout << "Error: Could not remove file '" << filePath << "'." << std::endl;
        }
    } else {
        std:: cout << "File '" << filePath << "' does not exist." << std::endl;
    }
    
    // Create an output file stream object
    std::ofstream outputFile(filePath);

    // Check if the file was opened successfully
    if(!outputFile.is_open()){
        std::cerr << "Error: Could not open teh file '" << filePath << "'." << std::endl;
        return;
    }

    // Use a nested for loop to iterate through the outer and inner vectors
    for (const auto& row : ghostLegsLadder){
        for(size_t i = 0; i < row.size(); ++i){
            // Write the current string to the file
            outputFile << row[i];
        }
        // After each row (inner vector), write a newline character for a new line in the file
        outputFile << std::endl;
    }

    // Close the file stream. It's good practice to do this explicitly
    outputFile.close();

    std::cout << "Successfully wrote data to '" << filePath << "'." << std::endl;
}

std::vector<std::vector<std::string>> read_ghost_legs_ladder(const std::string& filePath){
    std::vector<std::vector<std::string>>ghost_legs_ladder;

    std::ifstream inFileGhostLegsLadder(filePath);

    // Check if the file was opened successfully
    if(!inFileGhostLegsLadder){
        std::cerr << "Error: Could not open the file for reading." << std::endl;
        return ghost_legs_ladder;
    }

    std::string line;
    while(std::getline(inFileGhostLegsLadder, line)){
        if(line.empty()){
            continue; // Skip empty lines
        }
        std::stringstream ss(line);
        std::string element;
        std::vector<std::string> row;

        while(ss >> element){
            row.push_back(element);
        }

        ghost_legs_ladder.push_back(row);
    }

    // Close the file stream. It's good practice to do this explicitly
    inFileGhostLegsLadder.close();
    std::cout << "Successfully read ghost legs from '" << filePath << "'" << std::endl;
    return ghost_legs_ladder;
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

int main(int arc, char *argv[]){

    // Define a sample 2D vector of strings to be written to the file
    std::vector<std::vector<std::string>> sample_ghostLegsLadder = {
        {"7"," ","7"},
        {"A"," ", " ", "B", " ", " ", "C"},
        {"|", " ", " ", "|"," ", " ", "|"},
        {"|", "-","-","|"," "," ", "|"},
        {"|", " "," ","|","-","-", "|"},
        {"|", " "," ","|","-","-", "|"},
        {"|", " ", " ", "|"," ", " ", "|"},
        {"1", " ", " ", "2", " ", " ", "3"}
    };

    std::cout << " sample_ghostLegsLadder[5][1] : " << sample_ghostLegsLadder[5][5] << std::endl;

    // Specify the name of teh output file
    std::string filename_sample = "example_01_sample.txt";

    // Call the function to write the vector to the file
    write_ghost_legs_ladder(filename_sample, sample_ghostLegsLadder);

    // Read ghost legs back from the file
    std::vector<std::vector<std::string>> loaded_sample = read_ghost_legs_ladder(filename_sample);

    // Print the loaded ghost legs to verify
    if(!loaded_sample.empty()){
        std::cout << "\nVerifying the loaded ladder from file:" << std::endl;
        for(const auto& row : loaded_sample){
            for(const auto& element : row){
                // A ternary operator is used to handle empty strings for better readability
                std::cout << (element.empty() ? "''"  : element) << " ";
            }
            std::cout << std::endl;
        }
    }

    std::string start = "A";
    std::pair<int, int> p = findCharacter(loaded_sample, start);
    std::cout << p.first << " : " << p.second << std::endl;

    return 0;
}