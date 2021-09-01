#pragma once

#include <SFML/Graphics.hpp>

class Game
{
private:
    sf::RenderWindow m_window;

    bool m_running;

public:
    Game();
    
    void run();
    void quit();

    void handleEvents();
    void update();
    void render();
    
};
