#include "PlayerInput.h"

namespace Player {

std::ostream &operator<<(std::ostream &os, Move m) {
  switch (m) {
  case Move::None:
    return os << "None";
  case Move::Up:
    return os << "Up";
  case Move::Down:
    return os << "Down";
  case Move::Left:
    return os << "Left";
  case Move::Right:
    return os << "Right";
  }

  return os << "Invalid move";
}

std::ostream &operator<<(std::ostream &os, Action a) {
  switch (a) {
  case Action::None:
    return os << "None";
  case Action::Interact:
    return os << "Interact";
  }

  return os << "Invalid action";
}
}
