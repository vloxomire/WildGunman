#ifndef ENGINE_H
#define ENGINE_H
#include<SFML/Graphics.hpp>
#include<string>
class Camara;
class Engine
{
    public:
        Engine(int ventanaAncho,int ventanaAlto,std::string tituloVentana);
        ~Engine();

        bool GetIsRunning();
        void run();

    protected:

    private:
        void processEvents();
        void cargarNivel(unsigned int num);
        void update(sf::Time deltaTime);
        void render();

        bool m_isRunning;
        sf::RenderWindow& m_renderWindow;
        Camara* m_camaraMundo;
};

#endif // ENGINE_H
