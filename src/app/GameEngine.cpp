#include "GameEngine.h"

#include <cassert>

void GameEngine::Tick(TickInfo info) {
    // TODO FIXME

    _canvas.PresentCharacter(info.PlayerIndex, {0, 0});
}
