/*
Program: Geometric computations
Author: Douglas Almonfrey
Date: April 02, 2024
Description: Computes some geometric aspects of rectangles and circles
License: CC BY
*/

#include <iostream>
#include <Windows.h>
#include <conio.h>

int main() {
    int screen_width = GetSystemMetrics(SM_CXSCREEN);
    int screen_height = GetSystemMetrics(SM_CYSCREEN);
    POINT cursor_pos;

    while (true) {
        char ch;
        if (GetCursorPos(&cursor_pos)) {
            std::cout << "Mouse Position: x=" << cursor_pos.x << ", y=" << cursor_pos.y << std::endl;
        }

        if (cursor_pos.x < screen_width/2 && cursor_pos.y < screen_height/2) {
            std::cout << "Quad. A" << std::endl;
        } else if (cursor_pos.x > screen_width/2 && cursor_pos.y < screen_height/2) {
            std::cout << "Quad. B" << std::endl;
        } else if (cursor_pos.x < screen_width/2 && cursor_pos.y > screen_height/2) {
            std::cout << "Quad. C" << std::endl;
        } else if (cursor_pos.x > screen_width/2 && cursor_pos.y > screen_height/2) {
            std::cout << "Quad. D" << std::endl;
}


        Sleep(100); // Adjust the delay as needed
        if (_kbhit()) {
            ch = _getch();
            if (ch == 'c')
                break;
        }
    }
    return 0;
}