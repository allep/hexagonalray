#ifndef __FOR_DISPLAYING_H__
#define __FOR_DISPLAYING_H__

#include <cstdint>
#include <cstddef>
#include <utility>

class ForDisplaying {
public:
    virtual ~ForDisplaying() = default;

    virtual void PresentCharacter(size_t id, std::pair<uint8_t, uint8_t> position) = 0;
};

#endif
