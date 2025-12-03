#ifndef __FOR_PLAYING_H__
#define __FOR_PLAYING_H__

#include <cstdint>
#include <cstddef>

namespace Player {

enum class Move : uint8_t {
    None,
    Up,
    Down,
    Left,
    Right,
};

enum class Action : uint8_t {
    None,
    Interact,
};

}

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
