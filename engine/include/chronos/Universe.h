#pragma once

#include <vector>
#include <cstdint>
#include "Planet.h"

namespace chronos {

    class Universe
    {
    public:
        Universe();

        void update(int64_t deltaTicks);

        const std::vector<Planet>& planets() const;

    private:
        void generateInitialWorld();

        std::vector<Planet> m_planets;
    };

}
