#include <stdio.h>
#include <windows.h>

int main() {
    POINT cursorPos;
    while (1) {
        if (GetCursorPos(&cursorPos)) {
            printf("Mouse Position: x=%d, y=%d\n", cursorPos.x, cursorPos.y);
        }
        Sleep(100); // adjust the delay as needed
    }
return 0;
}