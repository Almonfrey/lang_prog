/*
Program: Serial access character by character
Author: Douglas Almonfrey
Date: Jun 4, 2024
Description: Implementation of serial access character by character
License: CC BY
*/

#include <iostream>
#include <fstream>

int main() {
    std::ifstream file;
    // File to be read
    const char* filename = "test_file.txt";
    char character;

    // Open the file for reading
    file.open(filename);

    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Read each character from the file serially and print it on the screen
    while (file.get(character)) {
        // '\n' is included to show how much information is read each time
        std::cout << character << '\n'; 
    }

    // Close the file
    file.close();

    return 0; // Return 0 indicating successful program termination
}
