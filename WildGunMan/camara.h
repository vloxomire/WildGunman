#ifndef CAMARA_H
#define CAMARA_H


class Camara
{
    public:
        Camara(int,int);
        //Camara(int,int,Entity);
        ~Camara();
        void update();
        void render();
    protected:

    private:
        sf::View m_view;
        int m_widthView;
        int m_heightView;
        //Entity
        //Transform
};

#endif // CAMARA_H
