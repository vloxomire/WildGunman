#include<SFML/Graphics.hpp>
class LaEntidad
{
    private:

    protected:
        sf::Texture *textura{0};
        sf::Sprite *sprite{0};
        int mayor;
        float xVec,yVec;

    public:
        LaEntidad(float,float);
        virtual ~LaEntidad();
};
