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
        const Resources& resources() const;
        int metalMineLevel() const;
        void setMetalMineLevel(int level);

    private:
        PlanetId m_id;
        Vec3 m_position;
        Resources m_resources;
        int m_metalMineLevel = 1;
    };

}
