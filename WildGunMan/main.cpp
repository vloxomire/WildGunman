#include"./engine.h"
#include"./constants.h"
#include<iostream>
int main()
{
    Engine* engine=new Engine(Constants::Window::Width,
                              Constants::Window::Height,
                              Constants::Window::Title);
    engine->run();

    delete engine;
    return 0;
};
