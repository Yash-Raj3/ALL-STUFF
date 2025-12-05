#include <windows.h> // Required for Windows API functions
#include <stdio.h>   // Required for printf

// Function to set console text and background color
void SetConsoleColor(int textColor, int bgColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}

int main() {
    // Example: Set text color to white (15) and background color to blue (1)
    SetConsoleColor(1, 2);
    printf("This text is white on a blue background.\n");

    // Example: Reset to default colors (white text on black background)
    SetConsoleColor(7, 0);
    printf("This text is the default color.\n");

    return 0;
}
