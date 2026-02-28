#include "chronos/Universe.h"
#include "chronos/Types.h"

#include <random>

namespace chronos {

    Universe::Universe()
    {
        generateInitialWorld();
    }

    void Universe::update(int64_t deltaTicks)
    {
        for (auto& planet : m_planets)
        {
            planet.update(deltaTicks);
        }
    }

    const std::vector<Planet>& Universe::planets() const
    {
        return m_planets;
    }

    void Universe::generateInitialWorld()
    {
        // Planeta startowa gracza
        m_planets.emplace_back(0, Vec3{0,0,0});

        std::mt19937 rng(42);
        std::uniform_int_distribution<int> dist(-50, 50);

        const int additionalPlanets = 5;

        for (int i = 1; i <= additionalPlanets; ++i)
        {
            Vec3 pos{
                dist(rng),
                dist(rng),
                dist(rng)
            };

            m_planets.emplace_back(i, pos);
        }
    }

}
