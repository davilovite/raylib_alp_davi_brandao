#include "raylib.h"

int main()
{
    Texture2D feliz;
    Texture2D luvaboxe;   // Vou ter uma imagem chamada luvaboxe
    Texture2D inimigo;  

    InitWindow(800, 450, "basic window");

    feliz = LoadTexture("PROJETO_DAVI/feliz.png");
    luvaboxe = LoadTexture("PROJETO_DAVI/luvaboxe.png");   // Carregue a imagem luvaboxe.png para usar no jogo
    inimigo = LoadTexture("PROJETO_DAVI/inimigo.png");
    
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        
        DrawTexture(feliz, 100, 100, GREEN);

        DrawTexture(luvaboxe, 300, 100, BLUE);
        
        DrawTexture(inimigo, 400, 100, RED);
        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
