#include "engine.h"
#include<iostream>
Engine::Engine(int windowWidth,int windowHeight,std::string windowTitle)
:m_renderWindow(*(new sf::RenderWindow(sf::VideoMode(windowWidth,windowHeight),windowTitle)))
{
    m_isRunning=true;
}

Engine::~Engine()
{

}
bool Engine::getIsRunning()const
{
    return m_isRunning;
}

void Engine::run()
{

    const sf::Time TimePerFrameInSeconds = sf::seconds(1.f / 60.f);
    sf::Clock clock;
    sf::Time timeSinceLastUpdate=sf::Time::Zero;
    sf::Time deltaTime=sf::Time::Zero;

    while(getIsRunning())
        {
            deltaTime=clock.restart();
            timeSinceLastUpdate +=deltaTime;

            while(timeSinceLastUpdate > TimePerFrameInSeconds)
                {
                    timeSinceLastUpdate -= TimePerFrameInSeconds;

                    processEvents();
                    update(TimePerFrameInSeconds);
                }
            render();
        }
}

void Engine::processEvents()
{
    sf::Event event;

    while(m_renderWindow.pollEvent(event))
        {
            switch(event.type)
            {
            case sf::Event::Closed:
                m_isRunning=false;
                m_renderWindow.close();
                break;
            case sf::Event::KeyPressed:
                if(event.key.code == sf::Keyboard::Escape)
                {
                      m_isRunning=false;
                      std::cout<<"the escape key was pressed"<<std::endl;
                      m_renderWindow.close();
                }
                break;
            default:
                break;
            }
        }
}

void Engine::update(sf::Time deltaTime)
{
    //GestorEntidad.update
    //camaraMundo.update
}

void Engine::render()
{
    m_renderWindow.clear(sf::Color::Black);

    //obj.camaraMundo
    //obj.GestorEntidadesEnMundo

    //obj.InterfazGui
    //obj.GestorEntidadEnGui

    m_renderWindow.display();
}

