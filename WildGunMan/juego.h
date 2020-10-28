#ifndef JUEGO_H
#define JUEGO_H
#include <SFML/Graphics.hpp>

class Juego
{
public:
    sf::Sprite *fondo;
    Juego();
    ~Juego();
    void Play();
protected:

private:
    sf::RenderWindow ventana;
sf::Texture fondoDePantalla;

    void Init();
    void Draw(sf::RenderWindow &ventana);
    void Update(sf::Clock &relog);
};

#endif // JUEGO_H
