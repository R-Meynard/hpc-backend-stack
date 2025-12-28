#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

// Function to write the ghost legs ladder to a file
void writeLadderToFile(const std::vector<std::vector<std::string>>& ladder, const std::string& filename) {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error: Could not open the file for writing." << std::endl;
        return;
    }

    for (const auto& row : ladder) {
        for (const auto& element : row) {
            outFile << element << " ";
        }
        outFile << "\n";
    }

    outFile.close();
    std::cout << "Successfully wrote ghost legs to '" << filename << "'" << std::endl;
}

// Function to read the ghost legs ladder from a file
std::vector<std::vector<std::string>> readLadderFromFile(const std::string& filename) {
    std::vector<std::vector<std::string>> ladder;
    std::ifstream inFile(filename);

    if (!inFile) {
        std::cerr << "Error: Could not open the file for reading." << std::endl;
        return ladder;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        if (line.empty()) {
            continue; // Skip empty lines
        }
        std::stringstream ss(line);
        std::string element;
        std::vector<std::string> row;

        while (ss >> element) {
            row.push_back(element);
        }
        ladder.push_back(row);
    }

    inFile.close();
    std::cout << "Successfully read ghost legs from '" << filename << "'" << std::endl;
    return ladder;
}

int main() {
    // 1. Create a sample ghost legs ladder
    std::vector<std::vector<std::string>> ghostLegsLadder = {
        {"|", "", "|", "", "|"},
        {"|", "-", "|", "", "|"},
        {"|", "", "|", "-", "|"},
        {"|", "-", "|", "", "|"},
        {"|", "", "|", "", "|"}
    };

    const std::string filename = "ghost_legs.txt";

    // 2. Write the ladder to a file
    writeLadderToFile(ghostLegsLadder, filename);

    // 3. Read the ladder back from the file
    std::vector<std::vector<std::string>> loadedLadder = readLadderFromFile(filename);

    // 4. Print the loaded ladder to verify
    if (!loadedLadder.empty()) {
        std::cout << "\nVerifying the loaded ladder from file:" << std::endl;
        for (const auto& row : loadedLadder) {
            for (const auto& element : row) {
                // A ternary operator is used to handle empty strings for better readability
                std::cout << (element.empty() ? "''" : element) << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}