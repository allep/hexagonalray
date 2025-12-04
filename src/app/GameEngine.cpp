#include "GameEngine.h"

#include <iostream>

void GameEngine::Tick(TickInfo info) {
    std::cout << "Tick for player: " << info.PlayerIndex
              << ", move: " << info.Move << ", action: " << info.Action
              << std::endl;

    _canvas.PresentCharacter(info.PlayerIndex, {0, 0});
}
