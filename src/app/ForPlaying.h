#ifndef __FOR_PLAYING_H__
#define __FOR_PLAYING_H__

#include "PlayerInput.h"

struct TickInfo {
    size_t PlayerIndex{};
    Player::Move Move{};
    Player::Action Action{};
};

class ForPlaying {
public:
    virtual ~ForPlaying() = default;

    virtual void Tick(TickInfo info) = 0;
};

#endif
