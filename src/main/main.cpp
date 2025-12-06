#include "GameEngine.h"
#include "RaylibPresenter.h"
#include "raylib.h"

int main(int argc, char** argv) {
    const auto screenWidth{800};
    const auto screenHeight{450};

    InitWindow(screenWidth, screenHeight, "HexagonalRay");

    RaylibPresenter presenter{};
    GameEngine engine{presenter};

    SetTargetFPS(60);

    const size_t playerIndex{0};

    while (!WindowShouldClose()) {
        TickInfo info{};

        if (IsKeyDown(KEY_UP)) {
            info.Move = PlayerInput::Move::Up;
        }

        if (IsKeyDown(KEY_DOWN)) {
            info.Move = PlayerInput::Move::Down;
        }

        if (IsKeyDown(KEY_LEFT)) {
            info.Move = PlayerInput::Move::Left;
        }

        if (IsKeyDown(KEY_RIGHT)) {
            info.Move = PlayerInput::Move::Right;
        }

        if (IsKeyDown(KEY_SPACE)) {
            info.Action = PlayerInput::Action::Interact;
        }

        engine.Tick(std::move(info));

        BeginDrawing();
        EndDrawing();
    }

    return 0;
}
