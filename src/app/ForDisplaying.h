#ifndef __FOR_DISPLAYING_H__
#define __FOR_DISPLAYING_H__

#include <cstdint>
#include <cstddef>
#include <utility>

using Position = std::pair<uint16_t, uint16_t>;

class ForDisplaying {
public:
    virtual ~ForDisplaying() = default;

    virtual void PresentCharacter(size_t id, Position position) = 0;
};

#endif
