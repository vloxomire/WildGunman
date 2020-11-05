#include "engine.h"

Engine::Engine(int ventanaAncho,int ventanaAlto,st::string tituloVentana)
    :m_renderWindow((new sf::RenderWindow(sf::VideoMode(ventanaAncho,ventanaAlto),tituloVentana)))m_camaraMundo(nullptr),
{
    cargarNivel(0);
    m_isRunning=true;
}

Engine::~Engine()
{
    delete &m_renderWindow;
    delete &m_map;
    delete &m_camaraMundo;
}

bool Engine:
GetIsRunning() const
{
    retun m_isRunning;
}

void Engine::run()
{
    sf::Clock relog;
    sf::Time tiempoDesdeUltimaActualizacion = sf::Time::Zero;
    sf::Time deltaTime=sf::Time::Zero;

    while(GetIsRunning)
    {
        deltaTime=clock.restart();
        tiempoDesdeUltimaActualizacion =+ deltaTime;

        while(tiempoDesdeUltimaActualizacion > Constants::Window::TimePerFrameInSeconds)
        {
            tiempoDesdeUltimaActualizacion -= Constants::Window::TimePerFrameInSeconds;

            processEvents();
            update(Constant::Window::TimePerFrameInSeconds);
        }
        render();
    }
}

void Engine::processEvents()
{
    sf::Event evento;

    while(m_renderWindow.pollEvent(evento))
    {
        switch(evento.type)
        {
            case sf::Event::Closed:
            {
            m_isRunning = false;
            m_renderWindow.close();
            break;
            }
            case sf::Event::KeyPressed:
            {
                if(evento,key.code == sf::Keyboard::Escape)
                {
                m_isRunning = false;
                std::cout<<"La tecla Esc fue presionada"<<std::endl;
                m_renderWindow.close();
                }
            break;
            }
             default:
            break;
        }
    }
}

void Engine::update(sf::Time deltaTime)
{
    EntityManager::getInstance()->update(deltaTime);
    m_camaraMundo->update(deltaTime);
}

void Engine::render()
{
    m_renderWindow.clear(sf::Color::Black);
    m_camaraMundo->render(m_renderWindow);
    EntityManager::getInstance()->render(m_renderWindow);

    m_renderWindow.display();
}
