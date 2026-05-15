#include "raylib.h"

int main()
{
    float posX = -100; // posição inicial (fora da tela)

    Texture2D feliz;

    Sound tiro; // variável de som
    Sound explosao;
    Sound moeda;
    
    Music fundo;

    InitWindow(800, 450, "basic window");

    InitAudioDevice(); // inicia o sistema de áudio

    feliz = LoadTexture("PROJETO_DAVI/feliz.png");

    tiro = LoadSound("PROJETO_DAVI/tiro.MP3"); // carrega o som
    explosao = LoadSound("PROJETO_DAVI/explosao.MP3");
    
    fundo = LoadMusicStream("PROJETO_DAVI/fundo.MP3");
    
    PlayMusicStream (fundo);

    while (!WindowShouldClose())
    {
        posX += GetFrameTime() * 300;
        
        UpdateMusicStream (fundo);

        if (posX > 800)
        {
            posX = -100;
        }
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            PlaySound (tiro);
        }
        if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT))
        {
            PlaySound (explosao);
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(feliz, posX, 10, WHITE);

        EndDrawing();
    }
    
    UnloadTexture(feliz);

    UnloadSound(tiro);
    UnloadSound(explosao);
    
    UnloadMusicStream(fundo);

    CloseAudioDevice();

    CloseWindow();

    return 0;
}
