#include "engine.h"

Engine::Engine(int windowWidth,int windowHeight,std::string windowTitle)
{
    windowWidth=800;
    windowHeight=600;
    windowTitle="Wild GunMan";
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

}

void Engine::processEvent()
{

}

void Engine::update(sf::Time deltaTime)
{

}

void Engine::render()
{

}

