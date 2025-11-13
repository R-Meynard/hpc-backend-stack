#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>


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

// function to read a file and to store data in a vector 2D
void read_test_game(std::string test_game_file, std::vector<std::vector<char>>& game){
    // Open and read the file
    std::ifstream file_to_read_test_game(test_game_file);

    // Check if the file was opened successfully
    if(!file_to_read_test_game){
        std::cout << "Unable to open file" << std::endl;
    }

    // Read each line of the file character by character
    std::string line;
    std::vector<char> tmp_vector;
   while(std::getline(file_to_read_test_game, line)){
        for(std::string::iterator it = line.begin(); it != line.end(); ++it){
            tmp_vector.push_back(*it);
        }
        // game vector to store the ghost legs
        game.push_back(tmp_vector);
        //tmp_vector.clear();
    }

    // Close the file
    file_to_read_test_game.close();

    // Display all data of the game vector
    printV(game);
}

void connected_pairs_sol1(char start, std::vector<std::vector<char>>& game, std::string T, std::string B){
    // search an element start
    auto it = std::find(game[1].begin(), game[1].end(), start);
    if(it != game[1].end()){
        std::cout << "Positioned at : " << std::distance(game[1].begin(), it) << std::endl;
    }else {
        std::cout << "Not present" << std::endl;
    }

    for (int i = 2; i < game.size(); i++){
        for (int j = 0; j < game[i].size(); j++){
            std::cout << game[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void connected_pairs_sol2(char start, std::vector<std::vector<char>>& game, std::string T, std::string B){
    
    std::vector<char> v_char;

    v_char = game[1];

    for(int i = 0; i < v_char.size(); i++){
        std::cout << v_char[i] << std::endl;
    }

    auto it = std::find(v_char.begin(), v_char.end(), 'A');

    if(it != v_char.end()){
        std::cout << "Positioned at : " << std::distance(v_char.begin(), it) << std::endl;
    }else {
        std::cout << "Not present" << std::endl;
    }

    for(int i = 0; i < v_char.size(); i++){
        std::cout << v_char[i] << std::endl;
    }
    
    std::cout << std::endl;

}

void connected_pairs_sol3(char start, std::vector<std::vector<char>>& game, std::string T, std::string B){
    
   for (int i = 2; i < game.size(); i++){
        for (int j = 0; j < game[i].size(); j++){
            std::cout << game[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;


}

int main(int argc , char* argv[]){

    std::vector<std::vector<char>> test_game;
    read_test_game("01_sample.txt", test_game);
    char start = 'A';
    std::string T = "";
    std::string B = "";
    connected_pairs_sol2(start, test_game, T, B);
}