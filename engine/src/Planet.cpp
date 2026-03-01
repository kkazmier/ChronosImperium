#include "chronos/Planet.h"

namespace chronos {

    Planet::Planet(PlanetId id, const Vec3& position)
    : m_id(id), m_position(position)
    {
    }

    void Planet::update(int64_t deltaTicks)
    {
        const double baseProduction = 1.0; // metal per tick per level

        double produced =
            baseProduction *
            static_cast<double>(m_metalMineLevel) *
            static_cast<double>(deltaTicks);

        m_resources.metal += produced;
    }

    Resources& Planet::resources()
    {
        return m_resources;
    }

    const Resources& Planet::resources() const
    {
        return m_resources;
    }

    int Planet::metalMineLevel() const
    {
        return m_metalMineLevel;
    }

    void Planet::setMetalMineLevel(int level)
    {
        m_metalMineLevel = level;
    }

}
