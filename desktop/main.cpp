#include <iostream>
#include <thread>
#include <chrono>

#include "chronos/GameEngine.h"

int main()
{
    chronos::GameEngine engine;

    std::cout << "Chronos Imperium - Prototype\n";

    while (true)
    {
        // tick = 1 sekunda
        engine.update(1);

        std::cout << "Tick: " << engine.currentTick() << std::endl;

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
