/*
Program: Parsing in C++
Author: Douglas Almonfrey
Date: Jun 4, 2024
Description: Implementation of parsing in C++
License: CC BY
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Function to split a string into tokens based on a delimiter
std::vector<std::string> split(const std::string &str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    size_t start = 0, end = 0;

    while ((end = str.find(delimiter, start)) != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    tokens.push_back(str.substr(start));

    return tokens;
}

int main() {
    std::ifstream inputFile("test_file.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        // Split the line by commas
        std::vector<std::string> tokens = split(line, ',');

        // Process each token
        for (const auto &token : tokens) {
            std::cout << token << std::endl;
        }
    }

    inputFile.close();  // Close the file
    return 0;
}
