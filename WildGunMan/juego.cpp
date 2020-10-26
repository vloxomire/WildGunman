#include "juego.h"
#include<iostream>
Juego::Juego()
{
    std::cout<<"Construyendo...\n";
}

Juego::~Juego()
{
    std::cout<<"Destruyendo...\n";
}

void Juego::Play()
{
    sf::RenderWindow ventana(sf::VideoMode(200,200,32),"Wild Gunman");
    while(ventana.isOpen())
    {
        sf::Event evento;
        while(ventana.pollEvent(evento))
        {
            if(evento.type==sf::Event::Closed)
            {
                ventana.close();
            }
        }
        ventana.clear();
        Update();
        Draw(ventana);

    }
}

void Juego::Draw(sf::RenderWindow &ventana)
{
    ventana.display();
}

void Juego::Update()
{

}
