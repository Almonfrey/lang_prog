/*
Program: Geometric computations
Author: Douglas Almonfrey
Date: April 02, 2024
Description: Analizes mouse's quadrant
License: CC BY
*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main() {
    int screen_width = GetSystemMetrics(SM_CXSCREEN);
    int screen_height = GetSystemMetrics(SM_CYSCREEN);
    POINT cursor_pos;

    while (1) {
        
        char ch;
        if (GetCursorPos(&cursor_pos)) {
            printf("Mouse Position: x=%d, y=%d\n", cursor_pos.x, cursor_pos.y);
        }

        int quad =  (cursor_pos.x<screen_width/2 && cursor_pos.y<screen_height/2)*1 + \
                    (cursor_pos.x>screen_width/2 && cursor_pos.y<screen_height/2)*2 + \
                    (cursor_pos.x<screen_width/2 && cursor_pos.y>screen_height/2)*3 + \
                    (cursor_pos.x>screen_width/2 && cursor_pos.y>screen_height/2)*4;
        switch(quad) {
            case 1:
                printf("Quad. A\n");
                break;
            case 2:
                printf("Quad. B\n");
                break;
            case 3:
                printf("Quad. C\n");
                break;
            case 4:
                printf("Quad. D\n");
                break;
        }

        Sleep(1000); // Adjust the delay as needed

        if (kbhit()) {
            ch = getch();
            if (ch == 'c')
                break;
        }
    }
return 0;
}