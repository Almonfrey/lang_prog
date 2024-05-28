# Program: Geometric computations
# Author: Douglas Almonfrey
# Date: April 02, 2024
# Description: Analizes mouse's quadrant
# License: CC BY

from ctypes import windll, Structure, c_long, byref
import time
import msvcrt

class Point(Structure):
    _fields_ = [("x", c_long), ("y", c_long)]

def query_mouse_position():
    pt = Point()
    windll.user32.GetCursorPos(byref(pt))
    return {"x": pt.x, "y": pt.y}


if __name__ == "__main__":

    screen_width = windll.user32.GetSystemMetrics(0)
    screen_height = windll.user32.GetSystemMetrics(1)

    while True:
        pos = query_mouse_position()
        print("Mouse Position: x=%d, y=%d"%(pos["x"],pos["y"]))


        if pos["x"] < screen_width / 2 and pos["y"] < screen_height / 2:
            print("Quad. A")
        elif pos["x"] > screen_width / 2 and pos["y"] < screen_height / 2:
            print("Quad. B")
        elif pos["x"] < screen_width / 2 and pos["y"] > screen_height / 2:
            print("Quad. C")
        elif pos["x"] > screen_width / 2 and pos["y"] > screen_height / 2:
            print("Quad. D")

        time.sleep(1)  # Adjust delay as needed

        if msvcrt.kbhit():
            if msvcrt.getch() == b'c':
                break