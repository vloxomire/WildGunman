#include"LaEntidad.h"

class Mira : public LaEntidad
{
    private:
    public:
       Mira(sf::Texture&textura ,sf::Sprite&sprite):LaEntidad(&textura,&sprite);
        ~Mira();
};
