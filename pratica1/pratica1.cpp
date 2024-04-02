/*
Program: Geometric computations
Author: Douglas Almonfrey
Date: March 04, 2024
Description: Computes some geometric aspects of rectangles and circles
License: CC BY
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int choice;
    const float PI = 3.14159;

    cout << "Choose an option:\n";
    cout << "1. Calculate circumference and area of a circle;\n";
    cout << "2. Calculate perimeter and area of a rectangle.\n";
    cout << "Your option is: ";
    cin >> choice;

    if (choice == 1) {
        // Calculates circumference and area
        float radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        float circumference = 2 * PI * radius;
        float area = PI * pow(radius, 2);
        cout << "Circumference of the circle: " << fixed << circumference << endl;
        cout << "Area of the circle: " << fixed << area << endl;
    }
    else if (choice == 2) {
        // Calculates perimeter and area
        float length, width;
        cout << "Enter the length and width of the rectangle - length width: ";
        cin >> length >> width;
        float perimeter = 2 * (length + width);
        float area = length * width;
        cout << "Perimeter of the rectangle: " << fixed << perimeter << endl;
        cout << "Area of the rectangle: " << fixed << area << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
