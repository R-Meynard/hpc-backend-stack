#include <iostream>
#include <fstream>

int main(){

    // Question 1 : Which C++ library allows us to work with files 
    // Answer :
    // fstream

    // Question 2 : Which class from the fstream library is used to create and write to files ?
    // Answer :
    // ifstream /** Wrong answer */
    // Correction 
    // ofstream

    // Question 3 : Consider the following code. What will it do ?
    std::ofstream MyFile("filename.txt");
    MyFile << "Writing to a file.";
    MyFile.close();
    // Answer 
    // Creates a file named filename.txt and writes 'Writing to a file' into it.

    // Question 4 : What is the purpose of closing a file after writing or reading in C++ ?
    // Answer 
    // To ensure changes are saved and free up memory

    // Question 5 : Which class would you use to read from a file in C++ ?
    // Answer
    // ifstream

    // Question 6 : Consider the following code. What does it do ?
    std::string myText;
    std::ifstream MyReadFile("filename.txt");
    while (std::getline(MyReadFile, myText)){
        std::cout << myText;
    }
    std::cout << std::endl;
    MyReadFile.close(); 
    // Answer 
    // Reads the content of filename.txt and prints line by line
    return 0;
}