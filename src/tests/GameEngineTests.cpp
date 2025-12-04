#include "GameEngine.h"

#include <gtest/gtest.h>

class DisplayMock : public ForDisplaying {
public:
  void PresentCharacter(size_t id, Position position) override {
    std::cout << "Presenting character: " << id << ", position: {"
              << position.first << ", " << position.second << "}" << std::endl;

    _characterPosition = position;
  }

  Position GetLastPosition(size_t id) const { return _characterPosition; }

private:
  Position _characterPosition{};
};

TEST(GameEngine, NaiveGameEngineTest) {
  // arrange
  DisplayMock display{};
  GameEngine engine{display};

  // act
  const size_t playerIndex{0};
  TickInfo info{
      .PlayerIndex = playerIndex,
      .Move = Player::Move::Up,
      .Action = Player::Action::Interact,
  };
  engine.Tick(std::move(info));

  // assert
  Position expected{0, 0};
  EXPECT_EQ(display.GetLastPosition(playerIndex), expected);
}

