'''
Program: Geometric computations
Author: Douglas Almonfrey
Date: March 04, 2024
Description: Computes some geometric aspects of rectangles and circles
License: CC BY
'''

import math

if __name__ == "__main__":

    choice = int(input("Choose an option:\n"
                       "1. Calculate circumference and area of a circle;\n"
                       "2. Calculate perimeter and area of a rectangle.\n"
                       "Your option is: "))    
    PI = 3.14159

    if choice == 1:
        # Calculates circumference and area
        radius = float(input("Enter the radius of the circle: "))
        circumference = 2 * PI * radius
        area = PI * radius * radius
        print(f"Circumference of the circle: {circumference:.2f}")
        print(f"Area of the circle: {area:.2f}")
    elif choice == 2:
        # Calculates perimeter and area
        length, width = map(float, input("Enter the length and width of the \
                                         rectangle - length width: ").split()
                        )
        print(f"Perimeter of the rectangle: {2 * (length + width):.2f}")
        print(f"Area of the rectangle: {length * width:.2f}")
    else:
        print("Invalid choice")
