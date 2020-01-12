#include "Engine.hpp"
#include "Game.hpp"

#include <string>
#include <iostream>
#include <curses.h>
#include <ctime>

int main( int argc, char *argv[] )
{
    // Variables
    int screenSizeX = 1024;
    int screenSizeY = 1024;
    int scaleX = 32;
    int scaleY = 32;
    float gameSpeed;
    bool quit = false;
    // Variables

    Engine engine(screenSizeX, screenSizeY, scaleX, scaleY, gameSpeed, &quit); // Initialize engine
    
    while(!quit)
    {
        engine.update(); // Run engine update member function
    }

    return 0;
}
