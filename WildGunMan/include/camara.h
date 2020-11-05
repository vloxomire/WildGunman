#ifndef CAMARA_H
#define CAMARA_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Entity;
class TransformComponent;

class Camara
{
    public:
        Camara(int withView,int heightView);
        Camara(int withView,int heightView,Entity* entityFollow);
        ~Camara();

    protected:

    private:
        sf::View m_view;
        int m_widthView;
        int m_heightView;
        Entity* m_entityToFollow;
        TransformComponent* m_entityTransformComponent;
};

#endif // CAMARA_H
