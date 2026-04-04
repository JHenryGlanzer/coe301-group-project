//contains the treasure hunt class definition and function prototypes. tells the compiler that this class exists as well as the member functions
#ifndef TREASUREHUNT_H
#define TREASUREHUNT_H

#include <vector>
#include <string>
#include "Clue.h"
#include <fstream>
#include <iostream>
using namespace std;

class TreasureHunt {
private:
    std::vector<std::string> mapGrid;
    int playerRow;
    int playerCol;
    int score;
    int completedCount;
    int totalLandmarks;
    bool gameOver;
    std::vector<Clue> clues;

public:
    TreasureHunt();
    bool loadMap(const std::string& filename);
    bool loadClues(const std::string& filename);
    void drawMap() const;
    void movePlayer(char input);
    void triggerClue(char landmarkSymbol);
    void startGame();
    void displayFinalResult() const;

    Clue* findClueBySymbol(char symbol);   // good place to use a pointer
};

#endif

