#include "game.hpp"

Game::Game()
:
m_window(sf::VideoMode(640, 480), "Legend Of Krya"),
m_running(true)
{}

void Game::run()
{
    while(m_running)
    {
        this->handleEvents();
        this->update();
        this->render();
    }
}

void Game::quit()
{
    m_running = false;
}

void Game::handleEvents()
{
    sf::Event event;
    while (m_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            m_running = false;
            m_window.close();
        }
    }
}

void Game::update()
{}

void Game::render()
{
    m_window.clear(sf::Color::Black);
    m_window.display();
}