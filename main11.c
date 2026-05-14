#include "raylib.h"

int main()
{
    Texture2D luvaboxe;   // Vou ter uma imagem chamada luvaboxe
    Texture2D inimigo;  

    InitWindow(800, 450, "basic window");

    luvaboxe = LoadTexture("PROJETO_DAVI/luvaboxe.png");   // Carregue a imagem luvaboxe.png para usar no jogo
    inimigo = LoadTexture("PROJETO_DAVI/inimigo.png");
    
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(luvaboxe, 300, 100, WHITE);
        
        DrawTexture(inimigo, 100, 100, WHITE);
        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
