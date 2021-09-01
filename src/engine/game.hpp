#pragma once

#include <SFML/Graphics.hpp>

class Game
{
private:
    sf::RenderWindow m_window;

    bool m_isRunning;

public:
    Game();
    
    void run();
    
};
