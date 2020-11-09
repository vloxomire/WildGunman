#ifndef ENGINE_CPP
#define ENGINE_CPP


class Engine
{
    public:
        Engine();
        ~Engine();
        bool getIsRunning();
        void run();

    private:
        bool m_isRunning;
        sf::RenderWindow m_renderWindow;
        void processEvent();
        void update(sf::Time);
        void render();
};

#endif // ENGINE_CPP
