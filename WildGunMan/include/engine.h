#ifndef ENGINE_H
#define ENGINE_H
#include<string>

class Engine
{
    public:
        Engine(int ventanaAncho,int ventanaAlto,std::string tituloVentana);
        ~Engine();

        bool GetIsRunning();

    protected:

    private:
        void processEvents();
        void update();
        void render();

        bool m_isRunning;
        sf::RenderWindow& m_renderWindow;
};

#endif // ENGINE_H
