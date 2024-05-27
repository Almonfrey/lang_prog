/*
Program: Geometric computations
Author: Douglas Almonfrey
Date: March 04, 2024
Description: Computes some geometric aspects of rectangles and circles
License: CC BY
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

// Struct definition for circle
typedef struct {
    float radius;
    float circumference;
    float area;
} Circle;

void calc_circ_length_area() {
    Circle circle;
    const float PI = 3.14159;

    // Calculates circumference and area
    printf("Enter the radius of the circle: ");
    scanf("%f", &circle.radius);
    circle.circumference = 2 * PI * circle.radius;
    circle.area = PI * circle.radius * circle.radius;
    printf("Circumference of the circle: %.2f\n", circle.circumference);
    printf("Area of the circle: %.2f\n", circle.area);
}

void calc_rect_perim_area() {
    float *length, *width;
    
    // Dynamic memory allocation for rectangle sides
    length = (float *)malloc(sizeof(float));
    width = (float *)malloc(sizeof(float));

    // Calculates perimeter and area
    printf("Enter the length and width of the rectangle - length width: ");
    scanf("%f %f", length, width);
    printf("Perimeter of the rectangle: %.2f\n", 2 * (*length + *width));
    printf("Area of the rectangle: %.2f\n", (*length) * (*width));

    // Free dynamically allocated memory
    free(length);
    free(width);
}

int main() {
    int choice;
    char ch;
    
    for(;;) {
        printf("Choose an option:\n");
        printf("1. Calculate circumference and area of a circle;\n");
        printf("2. Calculate perimeter and area of a rectangle.\n");
        printf("Your option is: ");
        scanf("%d", &choice);

        if (choice == 1) {
            calc_circ_length_area();
        } else if(choice == 2) {
            calc_rect_perim_area();
        } else {
            printf("Invalid choice");
        }
    
        Sleep(1000); // Adjust the delay as needed

        if (kbhit()) {
            ch = getch();
            if (ch == 27)
                break;
        }
    }

    return 0;
}
