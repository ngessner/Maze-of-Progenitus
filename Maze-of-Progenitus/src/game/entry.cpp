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


// to make run on another computer

/*

1: Ensure cross-platform code and include any necessary Raylib libraries (.lib, .dll, .so) or provide instructions for installation.


method 1:
Build Instructions (in README.md):
Windows (Visual Studio):
Clone the repo.
Open .sln or set up a new project.
Set include paths and libraries.
Build and run.



method 2 (better):
Add a CMakeLists.txt to your repo.

Users just run in bash or powershell or something:

mkdir build
cd build
cmake ..
make
./maze_progenitus

but you would have to learn how to create a cmake

*/