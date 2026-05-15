#include "raylib.h"

int main()
{
    float posX = -100;    // posição do feliz (começa fora da tela à esquerda)
    float posY = -100;

    Texture2D feliz;
    Texture2D inimigo;

    InitWindow(800, 450, "basic window");

    feliz = LoadTexture("PROJETO_DAVI/feliz.png");
    inimigo = LoadTexture("PROJETO_DAVI/inimigo.png");

    while (!WindowShouldClose())
    {
        posX += GetFrameTime() * 100;
        posY += GetFrameTime() * 600;

        if (posX > 800)
        {
            posX = -100;
        }
        if (posY > 800)
        {
            posY = -100;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(feliz, posX, 150, WHITE);
        
        DrawTexture(inimigo, posY, 50, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
