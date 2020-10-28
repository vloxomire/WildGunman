#include "juego.h"
#include<iostream>
Juego::Juego()
{
    std::cout<<"Construyendo...\n";

    if(fondoDePantalla.loadFromFile("background-hud.png"))
        {
                std::cout<<"Cargado el fondo...\n";

        }
    else
        {
            std::cout<<"No se puedo cargar el fondo...\n";
        }
       fondo= new sf::Sprite(fondoDePantalla);
       fondo->scale(0.8f,0.8f);
    Init();
}
Juego::~Juego()
{
    std::cout<<"Destruyendo...\n";
}

void Juego::Play()
{
    sf::RenderWindow ventana(sf::VideoMode(890,600,32),"Wild Gunman");

    while(ventana.isOpen())
    {
        sf::Clock relog;
        sf::Event evento;
        while(ventana.pollEvent(evento))
        {
            if(evento.type==sf::Event::Closed)
            {
                ventana.close();
            }
        }
        ventana.clear(sf::Color::Black);
        Update(relog);
        //Dibuja desde aca
        ventana.draw(*fondo);
        Draw(ventana);

    }
}

void Juego::Draw(sf::RenderWindow &ventana)
{

    ventana.display();
}

void Juego::Update(sf::Clock &relog)
{

}

void Juego::Init()
{
    std::cout<<"Entro al Init,cargando contenido...\n";

}
