#ifndef __GAME_ENGINE_H__
#define __GAME_ENGINE_H__

#include "ForDisplaying.h"
#include "ForPlaying.h"

class GameEngine : public ForPlaying {
public:
    explicit GameEngine(ForDisplaying& canvas) noexcept : _canvas{canvas} {}

    GameEngine(const GameEngine& other) = delete;
    GameEngine& operator=(const GameEngine& other) = delete;

    GameEngine(GameEngine&& other) noexcept = default;
    GameEngine& operator=(GameEngine&& other) noexcept = default;

    void Tick(TickInfo info) override;

private:
    ForDisplaying& _canvas;
};

#endif
