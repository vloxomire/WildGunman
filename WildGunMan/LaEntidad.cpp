#include"LaEntidad.h"
#include<iostream>

LaEntidad(float xVec=0,float yVec=0)
{
        std::cout<<"Construyendo LaEntidad...\n";
    if(textura)
        std::cout<<"es no es nulo\n";
        else
             std::cout<<"es nulo\n";
}

virtual~LaEntidad()
{
    std::cout<<"Destruyendo LaEntidad...\n";
}
