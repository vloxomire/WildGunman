#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <SFML/System.hpp>
#include <string>

namespace Constants
{
    namespace Window
    {
        const int Width =800;
        const int Height =600;
        const std::string Title = "WildGunman";
        const float FramesPerSecond = 60.f;
        const sf::Time TimePerFrameInSeconds = sf::seconds(1.f/FramesPerSecond);
    }
}

#endif // CONSTANTS_H
