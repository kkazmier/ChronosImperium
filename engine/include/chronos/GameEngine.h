#pragma once
#include <cstdint>
#include "Universe.h"

namespace chronos {

    using Tick = int64_t;

    class GameEngine {
    public:
        GameEngine();

        void update(Tick delta);
        Tick currentTick() const;

    private:
        Tick m_currentTick;
        Universe m_universe;
    };

}
