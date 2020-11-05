#include "engine.h"

Engine::Engine(int ventanaAncho,int ventanaAlto,st::string tituloVentana)
:m_renderWindow((new sf::RenderWindow(sf::VideoMode(ventanaAncho,ventanaAlto),tituloVentana)))m_camaraMundo(nullptr),
{
    m_isRunning=true;
}

Engine::~Engine()
{
    delete &m_renderWindow;
    delete &m_map;
    delete &m_camaraMundo;
}

bool Engine:GetIsRunning() const
{
    retun m_isRunning;
}

void Engine::Run()
{
    sf::Clock relog;
    sf::Time tiempoDesdeUltimaActualizacion = sf::Time::Zero;
    sf::Time deltaTime=sf::Time::Zero;

    while(GetIsRunning)
        {
            deltaTime=clock.restart();
            tiempo
        }
}
