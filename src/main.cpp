#include "raylib.h"

int main()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "Tornado3D v0.0.1");

    Camera3D camera = { 0 };
    camera.position = { 0.0f, 3.0f, 6.0f };
    camera.target = { 0.0f, 1.0f, 0.0f };
    camera.up = { 0.0f, 1.0f, 0.0f };
    camera.fovy = 60.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(SKYBLUE);

        BeginMode3D(camera);

        // Ground
        DrawPlane({0,0,0}, {200,200}, GREEN);

        // Player (tạm thời)
        DrawCube({0,1,0}, 1,2,1, RED);

        DrawGrid(20, 10);

        EndMode3D();

        DrawText("Tornado3D v0.0.1", 10, 10, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
