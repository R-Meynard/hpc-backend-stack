#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

// This function writes a 2D vector of strings to a specified file.
// It iterates through the vector and writes each string, separated by a space,
// to the file. Each inner vector is written on a new line.
bool writeVectorToFile(const std::string& filename, const std::vector<std::vector<std::string>>& data) {
    // Create an output file stream object.
    std::ofstream outputFile(filename);

    // Check if the file was successfully opened.
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not open the file " << filename << std::endl;
        return false;
    }

    // Iterate through each row of the 2D vector.
    for (const auto& row : data) {
        // Iterate through each string in the current row.
        for (const auto& str : row) {
            // Write the string to the file, followed by a space.
            // The empty strings (" ") are preserved as spaces in the file.
            outputFile << str << " ";
        }
        // Write a newline character to move to the next line for the next row.
        outputFile << std::endl;
    }

    // The file stream will be automatically closed when it goes out of scope.
    std::cout << "Successfully wrote the 2D vector to " << filename << std::endl;
    return true;
}

// This function reads data from a file and populates a 2D vector of strings.
// It reads each line, then parses the line by spaces to fill the vector.
std::vector<std::vector<std::string>> readVectorFromFile(const std::string& filename) {
    // Create an input file stream object.
    std::ifstream inputFile(filename);
    std::vector<std::vector<std::string>> data;

    // Check if the file was successfully opened.
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open the file " << filename << std::endl;
        return data; // Return an empty vector on failure.
    }

    std::string line;
    // Read the file line by line.
    while (std::getline(inputFile, line)) {
        std::stringstream ss(line);
        std::string word;
        std::vector<std::string> row;
        // Parse each word (space-separated string) from the current line.
        while (ss >> word) {
            row.push_back(word);
        }
        // Add the completed row to the 2D vector.
        data.push_back(row);
    }

    // The file stream will be automatically closed when it goes out of scope.
    std::cout << "Successfully read the 2D vector from " << filename << std::endl;
    return data;
}

int main() {
    // Define the 2D vector as requested.
    std::vector<std::vector<std::string>> sample_ghostLegsLadder = {
        {"7", " ", "7"},
        {"A", " ", " ", "B", " ", " ", "C"},
        {"|", " ", " ", "|", " ", " ", "|"},
        {"|", "-", "-", "|", " ", " ", "|"},
        {"|", " ", " ", "|", "-", "-", "|"},
        {"|", " ", " ", "|", "-", "-", "|"},
        {"|", " ", " ", "|", " ", " ", "|"},
        {"1", " ", " ", "2", " ", " ", "3"}
    };

    // Specify the output filename.
    std::string filename = "ghostLegsLadder.txt";

    // Call the function to write the vector to the file.
    if (writeVectorToFile(filename, sample_ghostLegsLadder)) {
        // You can add more code here to perform other operations.

         // Now, call the new function to read the data back from the file.
        std::vector<std::vector<std::string>> readData = readVectorFromFile(filename);

        // Print the contents of the read vector to verify.
        std::cout << "\nContents of the vector read from the file:" << std::endl;
        for (const auto& row : readData) {
            for (const auto& str : row) {
                // We print a separator to visually distinguish the elements.
                //std::cout << "[" << str << "]";
                std::cout << str << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
