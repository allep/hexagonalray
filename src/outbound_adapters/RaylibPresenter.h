#ifndef __RAYLIB_PRESENTER_H__
#define __RAYLIB_PRESENTER_H__

#include "ForDisplaying.h"

#include "raylib.h"

#include <iostream>

class RaylibPresenter : public ForDisplaying {
public:
  void PresentCharacter(size_t id, Position position) override {
    std::cout << "Presenting character: " << id << ", position: {"
              << position.first << ", " << position.second << "}" << std::endl;
  }
};

#endif
