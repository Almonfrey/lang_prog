# Program: Geometric computations
# Author: Douglas Almonfrey
# Date: April 02, 2024
# Description: Computes some geometric aspects of rectangles and circles
# License: CC BY

import msvcrt
import time
import itertools

def calc_circ_length_area():
    PI = 3.14159
    radius = float(input("Enter the radius of the circle: "))
    circumference = 2 * PI * radius
    area = PI * radius * radius
    print(f"Circumference of the circle: {circumference:.2f}")
    print(f"Area of the circle: {area:.2f}")

def calc_rect_perim_area():
    length, width = map(float, input("Enter the length and width of the rectangle - length width: ").split())
    print(f"Perimeter of the rectangle: {2 * (length + width):.2f}")
    print(f"Area of the rectangle: {length * width:.2f}")

if __name__ == "__main__":
    for i in itertools.count():
        print("Choose an option:")
        print("1. Calculate circumference and area of a circle;")
        print("2. Calculate perimeter and area of a rectangle.")
        choice = int(input("Your option is: "))

        if choice == 1:
            calc_circ_length_area()
        elif choice == 2:
            calc_rect_perim_area()
        else:
            print("Invalid choice")

        time.sleep(1)  # Adjust delay as needed

        if msvcrt.kbhit():
            if msvcrt.getch() == b'\x1b':
                break
