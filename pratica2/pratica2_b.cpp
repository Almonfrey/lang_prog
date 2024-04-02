#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>

using namespace std;

// Struct definition for circle
struct Circle {
    float radius;
    float circumference;
    float area;
};

void calc_circ_length_area() {
    Circle circle;
    const float PI = 3.14159;

    // Calculates circumference and area
    cout << "Enter the radius of the circle: ";
    cin >> circle.radius;
    circle.circumference = 2 * PI * circle.radius;
    circle.area = PI * circle.radius * circle.radius;
    cout << "Circumference of the circle: " << fixed << circle.circumference << endl;
    cout << "Area of the circle: " << fixed << circle.area << endl;
}

void calc_rect_perim_area() {
    float length, width;

    // Calculates perimeter and area
    cout << "Enter the length and width of the rectangle - length width: ";
    cin >> length >> width;
    float perimeter = 2 * (length + width);
    float area = length * width;
    cout << "Perimeter of the rectangle: " << fixed << perimeter << endl;
    cout << "Area of the rectangle: " << fixed << area << endl;
}

int main() {
    int choice;
    char ch;
    
    for (;;) {
        cout << "Choose an option:\n";
        cout << "1. Calculate circumference and area of a circle;\n";
        cout << "2. Calculate perimeter and area of a rectangle.\n";
        cout << "Your option is: ";
        cin >> choice;

        if (choice == 1) {
            calc_circ_length_area();
        } else if (choice == 2) {
            calc_rect_perim_area();
        } else {
            cout << "Invalid choice" << endl;
        }
    
        Sleep(1000); // Adjust the delay as needed

        if (_kbhit()) {
            ch = _getch();
            if (ch == 'c')
                break;
        }
    }

    return 0;
}