#include"Mira.h"
#include<iostream>
Diadema::Diadema(float xVec,float yVec):LaEntidad(xVec,yVec)
{
std::cout<<"Construyendo Diadema\n";
if(textura->loadFromFile("crosshair.png"))
    {
        std::cout<<"cargado diadema...\n";
        sprite=new sf::Sprite(*textura);
    }
else
    {
        std::cout<<"cargado diadema...\n";
    }
}
Diadema::~Diadema()
{
    std::cout<<"Destruyendo Diadema\n";
}


void Diadema::SetSpeed()
{

}
float Diadema::GetSpeed()
{

}
