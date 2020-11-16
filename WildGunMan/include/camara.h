#ifndef CAMARA_H
#define CAMARA_H


class Camara
{
    public:
        Camara(int widthView,int heightView);
        //Camara(int widthView,int heightView,Entity *entityFollow);
        ~Camara();

    void update(sf::Time deltaTime);
    void render(sf::RenderWindow &renderWindow);

    private:
        sf::View m_view;

};

#endif // CAMARA_H
