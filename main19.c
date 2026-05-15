#include "raylib.h"

int main()
{
    float posX = -100; // posição inicial (fora da tela)

    Texture2D feliz;

    Sound tiro; // variável de som
    Sound explosao;
    Sound moeda;

    InitWindow(800, 450, "basic window");

    InitAudioDevice(); // inicia o sistema de áudio

    feliz = LoadTexture("PROJETO_DAVI/feliz.png");

    tiro = LoadSound("PROJETO_DAVI/tiro.MP3"); // carrega o som
    explosao = LoadSound("PROJETO_DAVI/explosao.MP3");
    moeda = LoadSound("PROJETO_DAVI/moeda.MP3");

    while (!WindowShouldClose())
    {
        posX += GetFrameTime() * 300;

        if (posX > 800)
        {
            posX = -100;
        }
        if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT))
        {
            PlaySound (tiro);
            PlaySound (explosao);
            PlaySound (moeda);
        }
        if (IsKeyPressed(KEY_SPACE))
        {
            PlaySound (tiro);
            PlaySound (explosao);
            PlaySound (moeda);
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(feliz, posX, 10, WHITE);

        EndDrawing();
    }
    
    UnloadTexture(feliz);

    UnloadSound(tiro);
    UnloadSound(explosao);
    UnloadSound(moeda);

    CloseAudioDevice();

    CloseWindow();

    return 0;
}
