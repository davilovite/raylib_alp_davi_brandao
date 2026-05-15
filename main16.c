#include "raylib.h"

int main()
{
    float posX = -100;    // posição do feliz (começa fora da tela à esquerda)
    float posY = -100;
    float posW = -100;
    float posZ = -100;

    Texture2D feliz;
    Texture2D inimigo;

    InitWindow(800, 450, "basic window");

    feliz = LoadTexture("PROJETO_DAVI/feliz.png");
    inimigo = LoadTexture("PROJETO_DAVI/inimigo.png");

    while (!WindowShouldClose())
    {
        posX += GetFrameTime() * 100;
        posY += GetFrameTime() * 600;
        posW += GetFrameTime() * 100;
        posZ += GetFrameTime() * 600;

        if (posX > 450)
        {
            posX = -100;
        }
        if (posY > 800)
        {
            posY = -100;
        }
        if (posW > 450)
        {
            posW = -100;
        }
        if (posZ > 450)
        {
            posZ = -100;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(feliz, posX, posW, WHITE);

        DrawTexture(inimigo, posY, posZ, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
