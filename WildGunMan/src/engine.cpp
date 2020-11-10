#include "engine.h"

Engine::Engine(int windowWidth,int windowHeight,std::string windowTitle)
:m_renderWindow();
{

    m_isRunning=true;
}

Engine::~Engine()
{

}

/*bool getIsRunning();
        void run();
        void processEvent();
        void update(sf::Time);
        void render();
        */
