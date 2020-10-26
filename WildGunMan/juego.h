#ifndef JUEGO_H
#define JUEGO_H
#include <SFML/Graphics.hpp>

class Juego
{
public:
    Juego();
    ~Juego();
    void Play();
protected:

private:
    sf::RenderWindow ventana;
    void Draw(sf::RenderWindow &ventana);
    void Update();
};

#endif // JUEGO_H
