/*
Program: Geometric computations
Author: Douglas Almonfrey
Date: March 04, 2024
Description: Computes some geometric aspects of rectangles and circles
License: CC BY
*/

#include <stdio.h>
#include <stdlib.h>

// Struct definition for circle
typedef struct {
    float radius;
    float circumference;
    float area;
} Circle;

int main() {
    int choice;
    Circle circle;
    float *length, *width;
    const float PI = 3.14159;

    // Dynamic memory allocation for rectangle sides
    length = (float *)malloc(sizeof(float));
    width = (float *)malloc(sizeof(float));

    printf("Choose an option:\n");
    printf("1. Calculate circumference and area of a circle;\n");
    printf("2. Calculate perimeter and area of a rectangle.\n");
    printf("Your option is: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Calculates circumference and area
        printf("Enter the radius of the circle: ");
        scanf("%f", &circle.radius);
        circle.circumference = 2 * PI * circle.radius;
        circle.area = PI * circle.radius * circle.radius;
        printf("Circumference of the circle: %.2f\n", circle.circumference);
        printf("Area of the circle: %.2f\n", circle.area);
    } else if(choice == 2) {
        // Calculates perimeter and area
        printf("Enter the length and width of the rectangle - length width:");
        scanf("%f %f", length, width);
        printf("Perimeter of the rectangle: %.2f\n", 2 * (*length + *width));
        printf("Area of the rectangle: %.2f\n", (*length) * (*width));
    } else {
        printf("Invalid choice");
    }

    // Free dynamically allocated memory
    free(length);
    free(width);

    return 0;
}
