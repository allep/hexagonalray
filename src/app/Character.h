#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "PlayerInput.h"

#include <cstddef>
#include <cstdint>
#include <functional>
#include <utility>

class Character {
public:
    enum class Direction : uint8_t { Up, Down, Left, Right };

    using Position = std::pair<uint16_t, uint16_t>;
    using IsValidMove = std::function<bool(Position)>;
    using OnMoveCallback = std::function<void(Position, Direction)>;
    using OnActionCallback =
        std::function<void(Position, Direction, PlayerInput::Action)>;

    struct ConstructionData {
        Position StartPosition{};
        double Speed{};
        double CapsuleRadius{};
        IsValidMove CanMove{};
        OnMoveCallback OnMove{};
        OnActionCallback OnAction{};
    };

public:
    explicit Character(ConstructionData data)
        : _position{data.StartPosition}, _speed{data.Speed},
          _capsuleRadius{data.CapsuleRadius}, _canMove{data.CanMove},
          _onMoveEvent{data.OnMove}, _onActionEvent{data.OnAction} {}

    void Move(PlayerInput::Move move);
    void Act(PlayerInput::Action action);

private:
    Position _position{};
    double _speed{};
    double _capsuleRadius{};
    IsValidMove _canMove{};
    OnMoveCallback _onMoveEvent{};
    OnActionCallback _onActionEvent{};
};

#endif
