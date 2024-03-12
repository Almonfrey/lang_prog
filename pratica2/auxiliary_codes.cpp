#include <iostream>
#include <Windows.h>
#include <conio.h>

int main() {
    POINT cursor_pos;
    while (true) {
        char ch;
        if (GetCursorPos(&cursor_pos)) {
            std::cout << "Mouse Position: x=" << cursor_pos.x << ", y=" << cursor_pos.y << std::endl;
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

