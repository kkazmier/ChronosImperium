#include "chronos/GameEngine.h"
#include <iostream>

namespace chronos {

    GameEngine::GameEngine()
        : m_currentTick(0)
    {
        std::cout << "GameEngine created\n";
    }

    void GameEngine::update(int64_t deltaTicks)
    {
        m_currentTick += deltaTicks;

        m_universe.update(deltaTicks);
    }

    Tick GameEngine::currentTick() const
    {
        return m_currentTick;
    }

}
