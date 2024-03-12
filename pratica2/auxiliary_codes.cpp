#include <iostream>
#include <Windows.h>

int main() {
    POINT cursorPos;
    while (true) {
        if (GetCursorPos(&cursorPos)) {
            std::cout << "Mouse Position: x=" << cursorPos.x << ", y=" << cursorPos.y << std::endl;
        }
        Sleep(100); // Adjust the delay as needed
    }
    return 0;
}