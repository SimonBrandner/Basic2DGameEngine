#ifndef GAME
#define GAME

#include "Game.hpp"

Game::Game(int length, int mapSizeX, int mapSizeY, bool * q) : MapSizeX(), MapSizeY(), quit()
{
    // Variables
    MapSizeX = mapSizeX;
    MapSizeY = mapSizeY;
    quit = q;
}
    // Variables

std::vector<Pixel> Game::getChangedPixels()
{
    std::vector<Pixel> changedPixels;
    return changedPixels;
}

void Game::passInput(std::string pressedKey)
{
    if (pressedKey == "none"){return;}
    // Set variable based on pressed key
}

void Game::update()
{
    // Game update function
}

#endif
