#include<SFML/Graphics.hpp>
class LaEntidad
{

    protected:
        sf::Texture *textura;
        sf::Sprite *sprite;
        int mayor;

    public:
        LaEntidad(sf::Texture&textura,sf::Sprite&sprite);
        virtual ~LaEntidad();

    private:

};
