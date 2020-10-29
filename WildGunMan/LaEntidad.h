#include<SFML/Graphics.hpp>
class LaEntidad
{
    private:

    protected:
        //sf::Texture *textura{0};
        //sf::Sprite *sprite{0};
        float xVec,yVec;

    public:
        LaEntidad(float,float);
        ~LaEntidad();
// @note (Jin-Gitaxias#1#): Ver como poder usarlo, en la sub clase
        sf::Texture *textura{0};
        sf::Sprite *sprite{0};
};
