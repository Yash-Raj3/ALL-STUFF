#include "raylib.h"
#include <stdio.h>   // For sprintf
#include <string.h>  // For strcmp
#include <stdlib.h>  // For abs/atof/malloc
#include <math.h>    // For scientific functions

// --- 1. REFACTORED LOGIC FUNCTIONS (NO PRINTF/SCANF) ---
// You will need to move all 25 of your functions here, updated like these examples:

double perform_addition(double a, double b) { return a + b; }
double perform_subtraction(double a, double b) { return a - b; }
double perform_multiplication(double a, double b) { return a * b; }
double perform_division(double a, double b) {
    if (b != 0) return a / b;
    // You must handle the "Math Error" condition in the main loop logic
    return 0.0; // Error condition placeholder
}

// Function to calculate factorial of a number, returns long long
long long factorialReturn(long long n)
{
    long long f = 1;
    for(long long i = 1; i<=n; i++)
    {
        f = f * i;
    }
    return f;
}

// --- 2. GUI DATA STRUCTURES AND DEFINITIONS ---

// Define action codes that match your original menu
#define ACTION_ADD 1
#define ACTION_SUBTRACT 2
#define ACTION_CLEAR 24
#define ACTION_EXIT 25
// ... define codes for 3 through 23 ...

typedef struct {
    Rectangle rect;
    const char *text;
    int action_code;
} GuiButton;

// Helper function to check if a string represents a digit (for input handling)
bool is_digit(const char *s) {
    if (strlen(s) != 1) return false;
    return s[0] >= '0' && s[0] <= '9';
}

// --- 3. MAIN RAYLIB PROGRAM ---

int main()
{
    const int screenWidth = 400;
    const int screenHeight = 550;

    InitWindow(screenWidth, screenHeight, "Raylib Scientific Calculator");
    SetTargetFPS(60);

    // Calculator State Variables
    double currentValue = 0.0;
    double storedValue = 0.0;
    int pendingOperation = 0; // Stores the action code of the pending operation (+, -, etc.)
    bool newNumberStarted = false; // Flag to indicate start of new input
    char displayBuffer[50] = "0"; // String buffer for drawing to the screen

    // Define buttons layout (Simplified for basic ops)
    GuiButton buttons[] = {
        // Row 1: 7, 8, 9, +
        {{20, 150, 80, 60}, "7", 7},
        {{110, 150, 80, 60}, "8", 8},
        {{200, 150, 80, 60}, "9", 9},
        {{300, 150, 80, 60}, "+", ACTION_ADD},
        // Row 2: 4, 5, 6, -
        {{20, 220, 80, 60}, "4", 4},
        {{110, 220, 80, 60}, "5", 5},
        {{200, 220, 80, 60}, "6", 6},
        {{300, 220, 80, 60}, "-", ACTION_SUBTRACT},
        // Row 3: 1, 2, 3, =
        {{20, 290, 80, 60}, "1", 1},
        {{110, 290, 80, 60}, "2", 2},
        {{200, 290, 80, 60}, "3", 3},
        {{300, 290, 80, 60}, "=", 99}, // Use 99 for equals action
        // Bottom Row: 0, ., C, Exit
        {{20, 360, 170, 60}, "0", 0},
        {{200, 360, 80, 60}, ".", 100}, // Use 100 for decimal
        {{300, 360, 80, 60}, "C", ACTION_CLEAR},

        // YOU MUST ADD ALL YOUR SCIENTIFIC BUTTONS HERE (sin, cos, log, etc.)
        // e.g.: {{..., ..., ..., ...}, "sin", ACTION_SINE},
    };
    int numButtons = sizeof(buttons) / sizeof(buttons[0]);

    while (!WindowShouldClose())
    {
        // --- UPDATE PHASE: Handle Input ---
        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            Vector2 mousePoint = GetMousePosition();

            for (int i = 0; i < numButtons; i++)
            {
                if (CheckCollisionPointRec(mousePoint, buttons[i].rect))
                {
                    int action = buttons[i].action_code;

                    if (is_digit(buttons[i].text)) {
                        // Handle number input
                        if (newNumberStarted || strcmp(displayBuffer, "0") == 0) {
                            sprintf(displayBuffer, "%s", buttons[i].text);
                            newNumberStarted = false;
                        } else {
                            // Append digit
                            strcat(displayBuffer, buttons[i].text);
                        }
                        currentValue = atof(displayBuffer); // Convert string to float
                    }
                    else if (action == ACTION_CLEAR) {
                        // Clear everything
                        currentValue = 0.0;
                        storedValue = 0.0;
                        pendingOperation = 0;
                        sprintf(displayBuffer, "0");
                        newNumberStarted = false;
                    }
                    else if (action == ACTION_ADD || action == ACTION_SUBTRACT /* ... other ops ... */) {
                        // When an operator is pressed, store the current value and the operation
                        storedValue = currentValue;
                        pendingOperation = action;
                        newNumberStarted = true; // Next digit starts a new number
                    }
                    else if (action == 99) { // Equals button
                        if (pendingOperation != 0) {
                            double result = 0.0;
                            if (pendingOperation == ACTION_ADD) {
                                result = perform_addition(storedValue, currentValue);
                            } else if (pendingOperation == ACTION_SUBTRACT) {
                                result = perform_subtraction(storedValue, currentValue);
                            }
                            // Update state with final result
                            currentValue = result;
                            storedValue = 0.0;
                            pendingOperation = 0;
                            sprintf(displayBuffer, "%.2f", result); // Update display string
                            newNumberStarted = true; // Next press starts new number
                        }
                    }
                    // Add more logic here for all 25 operations (sin, cos, etc.)
                }
            }
        }

        // --- DRAW PHASE ---
        BeginDrawing();
            ClearBackground(RAYWHITE);

            // Draw the display area
            DrawRectangle(10, 20, screenWidth - 20, 100, DARKGRAY);
            // Draw the text aligned right within the display
            int textWidth = MeasureText(displayBuffer, 40);
            DrawText(displayBuffer, screenWidth - textWidth - 30, 50, 40, WHITE);

            // Draw the buttons
            for (int i = 0; i < numButtons; i++)
            {
                DrawRectangleRec(buttons[i].rect, LIGHTGRAY);
                DrawRectangleLinesEx(buttons[i].rect, 1, DARKGRAY);
                // Center text in button visually
                int buttonTextWidth = MeasureText(buttons[i].text, 20);
                DrawText(buttons[i].text, buttons[i].rect.x + (buttons[i].rect.width - buttonTextWidth) / 2, buttons[i].rect.y + 20, 20, BLACK);
            }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
