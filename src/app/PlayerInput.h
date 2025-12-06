#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <cstddef>
#include <cstdint>
#include <iostream>

namespace PlayerInput {

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

std::ostream& operator<<(std::ostream& os, Move m);
std::ostream& operator<<(std::ostream& os, Action a);

} // namespace PlayerInput

#endif
