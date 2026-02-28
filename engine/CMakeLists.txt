add_library(chronos_engine STATIC
        include/chronos/Resources.h
        include/chronos/Planet.h
        src/Planet.cpp
        include/chronos/Types.h
        include/chronos/Universe.h
        src/Universe.cpp)

target_sources(chronos_engine
        PRIVATE
        src/GameEngine.cpp
)

target_include_directories(chronos_engine
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
