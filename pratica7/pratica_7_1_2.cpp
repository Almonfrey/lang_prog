/*
Program: Direct access 
Author: Douglas Almonfrey
Date: Jun 4, 2024
Description: Implementation of serial access 
License: CC BY
*/

#include <iostream>
#include <fstream>
#include <string>

// Definition of the "Date" class to represent dates
class Date {
private:
    int day, month, year;  // Day, month, year

public:
    // Constructor to initialize a date
    Date(int d = 0, int m = 0, int y = 0) : day(d), month(m), year(y) {}

    // Methods to get the date components
    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    // Methods to set the date components
    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    // Method to display the date
    void display() const {
        std::cout << year << "/" << month << "/" << day << std::endl;
    }
};

int main() {
    Date d1(7, 9, 1999);  // Initialization of the first date
    Date d2(12, 5, 2024);  // Initialization of the second date
    
    Date e1;  // Declaration of another date for reading from the file
    Date e2;  // Declaration of another date for reading from the file

    std::string filename;  // String to store the file name
    
    // Asks the user for the file name
    std::cout << "Enter filename: ";
    std::getline(std::cin, filename);

    // Opens the file for binary writing
    std::ofstream outfile(filename, std::ios::binary);
    if (!outfile) {
        std::cerr << "Error! Unable to open file for writing!" << std::endl;
        return 1;  // Exits the program in case of error
    }
    outfile.write(reinterpret_cast<const char*>(&d1), sizeof(Date));  // Writes the first object to the file
    outfile.write(reinterpret_cast<const char*>(&d2), sizeof(Date));  // Writes the second object to the file
    outfile.close();  // Closes the file

    // Opens the file for binary reading
    std::ifstream infile(filename, std::ios::binary);
    if (!infile) {
        std::cerr << "Error! Unable to open file for reading!" << std::endl;
        return 1;  // Exits the program in case of error
    }
    infile.read(reinterpret_cast<char*>(&e1), sizeof(Date));  // Reads the first object from the file
    infile.read(reinterpret_cast<char*>(&e2), sizeof(Date));  // Reads the second object from the file
    infile.close();  // Closes the file

    // Displays the dates read from the file
    std::cout << "First Date: ";
    e1.display();
    std::cout << "Second Date: ";
    e2.display();

    return 0;
}
