#include "chronos/Planet.h"

namespace chronos {

    Planet::Planet(PlanetId id, const Vec3& position)
    : m_id(id), m_position(position)
    {
    }

    void Planet::update(int64_t deltaTicks)
    {
        // Na razie nic — produkcję dodamy później
    }

    Resources& Planet::resources()
    {
        return m_resources;
    }

}
