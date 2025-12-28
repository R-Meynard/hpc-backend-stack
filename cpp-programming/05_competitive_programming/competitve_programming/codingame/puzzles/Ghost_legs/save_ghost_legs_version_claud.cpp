#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

class VectorFileManager {
public:
    // Save vector to file with delimiter
    static bool saveVectorToFile(const std::vector<std::vector<std::string>>& data, 
                                 const std::string& filename) {
        std::ofstream file(filename);
        if (!file.is_open()) {
            std::cerr << "Error: Could not open file for writing: " << filename << std::endl;
            return false;
        }

        // Write dimensions first
        file << data.size() << std::endl;
        
        for (const auto& row : data) {
            file << row.size() << std::endl;
            for (size_t i = 0; i < row.size(); i++) {
                // Use a delimiter to separate elements (even spaces)
                file << "[" << row[i] << "]";
                if (i < row.size() - 1) {
                    file << "|"; // delimiter between elements
                }
            }
            file << std::endl;
        }
        
        file.close();
        std::cout << "Vector saved to " << filename << " successfully!" << std::endl;
        return true;
    }

    // Read vector from file
    static bool loadVectorFromFile(std::vector<std::vector<std::string>>& data, 
                                  const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) {
            std::cerr << "Error: Could not open file for reading: " << filename << std::endl;
            return false;
        }

        data.clear();
        
        size_t numRows;
        if (!(file >> numRows)) {
            std::cerr << "Error reading number of rows" << std::endl;
            return false;
        }

        file.ignore(); // ignore newline after number

        for (size_t i = 0; i < numRows; i++) {
            size_t rowSize;
            if (!(file >> rowSize)) {
                std::cerr << "Error reading row size for row " << i << std::endl;
                return false;
            }
            file.ignore(); // ignore newline

            std::string line;
            if (!std::getline(file, line)) {
                std::cerr << "Error reading row " << i << std::endl;
                return false;
            }

            std::vector<std::string> row;
            std::stringstream ss(line);
            std::string element;

            // Parse elements separated by |
            while (std::getline(ss, element, '|')) {
                // Remove brackets and add to row
                if (element.length() >= 2 && element[0] == '[' && element.back() == ']') {
                    element = element.substr(1, element.length() - 2);
                }
                row.push_back(element);
            }

            data.push_back(row);
        }

        file.close();
        std::cout << "Vector loaded from " << filename << " successfully!" << std::endl;
        return true;
    }

    // Alternative method using binary format for exact preservation
    static bool saveBinaryFormat(const std::vector<std::vector<std::string>>& data, 
                                const std::string& filename) {
        std::ofstream file(filename, std::ios::binary);
        if (!file.is_open()) {
            std::cerr << "Error: Could not open file for binary writing: " << filename << std::endl;
            return false;
        }

        // Write number of rows
        size_t rows = data.size();
        file.write(reinterpret_cast<const char*>(&rows), sizeof(rows));

        for (const auto& row : data) {
            // Write number of columns
            size_t cols = row.size();
            file.write(reinterpret_cast<const char*>(&cols), sizeof(cols));

            // Write each string
            for (const auto& str : row) {
                size_t len = str.length();
                file.write(reinterpret_cast<const char*>(&len), sizeof(len));
                file.write(str.c_str(), len);
            }
        }

        file.close();
        std::cout << "Vector saved in binary format to " << filename << " successfully!" << std::endl;
        return true;
    }

    static bool loadBinaryFormat(std::vector<std::vector<std::string>>& data, 
                               const std::string& filename) {
        std::ifstream file(filename, std::ios::binary);
        if (!file.is_open()) {
            std::cerr << "Error: Could not open file for binary reading: " << filename << std::endl;
            return false;
        }

        data.clear();

        // Read number of rows
        size_t rows;
        file.read(reinterpret_cast<char*>(&rows), sizeof(rows));

        for (size_t i = 0; i < rows; i++) {
            // Read number of columns
            size_t cols;
            file.read(reinterpret_cast<char*>(&cols), sizeof(cols));

            std::vector<std::string> row;
            for (size_t j = 0; j < cols; j++) {
                // Read string length
                size_t len;
                file.read(reinterpret_cast<char*>(&len), sizeof(len));

                // Read string content
                std::string str(len, '\0');
                file.read(&str[0], len);
                row.push_back(str);
            }
            data.push_back(row);
        }

        file.close();
        std::cout << "Vector loaded from binary format " << filename << " successfully!" << std::endl;
        return true;
    }

    // Print vector for visualization
    static void printVector(const std::vector<std::vector<std::string>>& data, 
                           const std::string& title = "") {
        if (!title.empty()) {
            std::cout << "\n=== " << title << " ===" << std::endl;
        }
        
        std::cout << "Vector dimensions: " << data.size() << " rows" << std::endl;
        
        for (size_t i = 0; i < data.size(); i++) {
            std::cout << "Row " << i << " (" << data[i].size() << " cols): ";
            std::cout << "{ ";
            for (size_t j = 0; j < data[i].size(); j++) {
                std::cout << "\"" << data[i][j] << "\"";
                if (j < data[i].size() - 1) {
                    std::cout << ", ";
                }
            }
            std::cout << " }" << std::endl;
        }
        std::cout << std::endl;
    }

    // Print vector in grid format
    static void printGrid(const std::vector<std::vector<std::string>>& data, 
                         const std::string& title = "") {
        if (!title.empty()) {
            std::cout << "\n=== " << title << " (Grid Format) ===" << std::endl;
        }
        
        for (const auto& row : data) {
            std::cout << "|";
            for (const auto& cell : row) {
                std::cout << (cell == " " ? "." : cell) << "|";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
};

int main() {
    // Original Ghost Legs Ladder
    std::vector<std::vector<std::string>> original_ghostLegsLadder = {
        {"7"," ","7"},
        {"A"," ", " ", "B", " ", " ", "C"},
        {"|", " ", " ", "|"," ", " ", "|"},
        {"|", "-","-","|"," "," ", "|"},
        {"|", " "," ","|","-","-", "|"},
        {"|", " "," ","|","-","-", "|"},
        {"|", " ", " ", "|"," ", " ", "|"},
        {"1", " ", " ", "2", " ", " ", "3"}
    };

    // Print original
    VectorFileManager::printVector(original_ghostLegsLadder, "Original Ghost Legs Ladder");
    VectorFileManager::printGrid(original_ghostLegsLadder, "Original Grid View");

    // Test Method 1: Text format with delimiters
    std::cout << "\n=== Testing Text Format ===\n";
    if (VectorFileManager::saveVectorToFile(original_ghostLegsLadder, "ghost_legs_text.txt")) {
        std::vector<std::vector<std::string>> loaded_text;
        if (VectorFileManager::loadVectorFromFile(loaded_text, "ghost_legs_text.txt")) {
            VectorFileManager::printVector(loaded_text, "Loaded from Text File");
            VectorFileManager::printGrid(loaded_text, "Loaded Grid View");
            
            // Verify integrity
            bool identical = (original_ghostLegsLadder == loaded_text);
            std::cout << "Data integrity check: " << (identical ? "PASSED ✓" : "FAILED ✗") << std::endl;
        }
    }

    // Test Method 2: Binary format (more reliable for exact preservation)
    /*std::cout << "\n=== Testing Binary Format ===\n";
    if (VectorFileManager::saveBinaryFormat(original_ghostLegsLadder, "ghost_legs_binary.dat")) {
        std::vector<std::vector<std::string>> loaded_binary;
        if (VectorFileManager::loadBinaryFormat(loaded_binary, "ghost_legs_binary.dat")) {
            VectorFileManager::printVector(loaded_binary, "Loaded from Binary File");
            VectorFileManager::printGrid(loaded_binary, "Loaded Grid View");
            
            // Verify integrity
            bool identical = (original_ghostLegsLadder == loaded_binary);
            std::cout << "Data integrity check: " << (identical ? "PASSED ✓" : "FAILED ✗") << std::endl;
        }
    }*/

    return 0;
}