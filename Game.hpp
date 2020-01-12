#ifndef GAMECLASS
#define GAMECLASS

#include <iostream>
#include <vector>
#include <cstdlib>

#include "Main.hpp"

class Game
{
public:
    Game(int, int, int, bool *);
    std::vector<Pixel> getChangedPixels();
    void passInput(std::string);
    void update();
private:
    int MapSizeX;
    int MapSizeY;

    bool * quit;
};

#endif
