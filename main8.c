#include "raylib.h"

int main()
{
    int posX = 0;  // Onde o quadrado está no eixo horizontal
    int posy = 800;

    InitWindow(800, 450, "basic window");

    while (!WindowShouldClose())
    {
        posX+=5;
        posy-=5;
        if (posX > 800)
        {
            posX = 0;
        }
        if (posy < 0)
        {
            posy = 800;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(posX, 100, 100, 100, BLUE);
        DrawRectangle(posy,300,100,100, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
