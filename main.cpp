#include <iostream>
#include "TreasureHunt.h"

int main()
{
    TreasureHunt game;  //loading in treasure hunt game class

    if (!game.loadMap("map.txt"))   //calling function and making sure it works
    {
        std::cout << "Error loading map.txt\n";
        return 1;
    }

    if (!game.loadClues("clues.txt"))   //calling function and making sure it works
    {
        std::cout << "Error loading clues.txt\n";
        return 1;
    }

    game.startGame();   //starting the game loop
    return 0;
}