#include <iostream>
#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "raylib [core] example - basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("testing", 190, 200, 20, BLACK);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}

// game is anything game related
// platform is anything for entry point, window opening, input, and main loop https://www.youtube.com/watch?v=id_xWalGulU