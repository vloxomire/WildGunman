#ifndef ENGINE_CPP
#define ENGINE_CPP
#include<SFML/Graphics.hpp>
#include<string>
class Engine
{
    public:
        Engine(int,int,std::string);
        ~Engine();
        bool getIsRunning() const;
        void run();

    private:
        bool m_isRunning;
        sf::RenderWindow m_renderWindow;
        void processEvent();
        void update(sf::Time);
        void render();
};

#endif // ENGINE_CPP
