#include"./Engine.h"
int main()
{
    Engine* engine=new Engine(800,600,"WildGunman");
    engine->run();
    delete engine;
    return 0;
}
