#include "game.hpp"

Game::Game()
:
m_window(sf::VideoMode(640, 480), "Legend Of Krya"),
m_isRunning(true)
{}

void Game::run()
{
    while(m_window.isOpen())
    {
        sf::Event event;
        while(m_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                m_window.close();
            }
        }

        m_window.clear(sf::Color::Black);
        m_window.display();
    }
}
