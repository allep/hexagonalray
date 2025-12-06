#include "GameEngine.h"

#include <iostream>

void GameEngine::Tick(TickInfo info) {
    std::cout << "Tick for player: " << info.PlayerIndex
              << ", move: " << info.Move << ", action: " << info.Action
              << std::endl;

    // _canvas.BeginDrawing();
    // _canvas.RefreshBackground(position);
    //
    // const auto CanvasRefresher{}; // raii object to call begindrawing +
    // enddrawing
    //
    // character = GetCharacter(info.PlayerIndex);
    // if (!character)
    //  return;
    //
    // if (info.Move != None) {
    //     const auto currentPosition = character->GetPosition();
    //     const auto speed = character->GetSpeed();
    //
    //     // responsible to check if the movement is valid inside the map,
    //     // given invalid positions etc
    //     const auto movementContext = MakeMovementContext(currentPosition,
    //     move, speed);
    //
    //     character->Move(movementContext); // this calls an onMoved callback
    //     on the engine
    // }
    //
    // if (info.Interaction != None) {
    //     character->Interact(interactionContext); // this calls an
    //     onInteracted callback on the engine
    // }
    //
    // _canvas.EndDrawing();
}
