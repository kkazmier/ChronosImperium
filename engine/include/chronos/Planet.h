#pragma once
#include "Resources.h"
#include "Types.h"
#include <cstdint>

namespace chronos {

    using PlanetId = uint32_t;

    class Planet
    {
    public:
        Planet(PlanetId id, const Vec3& position);

        void update(int64_t deltaTicks);

        Resources& resources();

    private:
        PlanetId m_id;
        Vec3 m_position;
        Resources m_resources;
    };

}
