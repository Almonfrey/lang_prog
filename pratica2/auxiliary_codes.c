#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main() {
    POINT cursor_pos;
    while (1) {
        char ch;
        if (GetCursorPos(&cursor_pos)) {
            printf("Mouse Position: x=%d, y=%d\n", cursor_pos.x, cursor_pos.y);
        }
        Sleep(100); // adjust the delay as needed

        if (kbhit()) {
            ch = getch();
            if (ch == 'c')
                break;
        }
    }
return 0;
}

