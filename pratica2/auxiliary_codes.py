from ctypes import windll, Structure, c_long, byref
import time
import msvcrt

class Point(Structure):
    fields = [("x", c_long), ("y", c_long)]

def query_mouse_position():
    pt = Point()
    windll.user32.GetCursorPos(byref(pt))
    return {"x": pt.x, "y": pt.y}

while True:
    pos = query_mouse_position()
    print("Mouse Position: x=%d, y=%d"%(pos["x"],pos["y"]))
    time.sleep(0.1)  # adjust delay as needed

    if msvcrt.kbhit():
        if msvcrt.getch() == b'c':
            break
