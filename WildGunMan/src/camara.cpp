#include "camara.h"
#include"entity.h"
//#include"transform-component.h"

Camara::Camara(int widthView,int heightView,Entity* entityToFollow)
:m_widthView(widthView),
m_heightView(heightView),
m_entityToFollow(entityToFollow)
{
    if(entityToFollow)
        {
            m_entityTransformComponent = m_entityToFollow->getComponent<transformComponent>();
        }
    m_view.setSize(m_widthView,m_heightView);
    m_view.setCenter(m_widthView /2, m_heightView /2);
}

Camera::Camera(int widthView, int heightView)
:Camera(widthView,heightView, nullptr)
{

}
Camara::~Camara()
{

}

void Camara::render(sf::RenderWindow& renderWindow)
{
    renderWindow.setView(m_view);
}

void Camera::update(sf::Time deltaTime)
{

}
