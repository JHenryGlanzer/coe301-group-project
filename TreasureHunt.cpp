// this is where all of the main game logic and flow control is implemented. This is where the main game loop is located.
#include "TreasureHunt.h"
//initial the treasurehunt class/object to start the game

TreasureHunt::TreasureHunt() : playerRow(0), playerCol(0), score(0), completedCount(0), totalLandmarks(0), gameOver(false) {}


void TreasureHunt::loadMap(const std::string& filename) {
    // code to load the map from a file
}

void TreasureHunt::loadClues(const std::string& filename) {
    // code to load the clues from a file
}

void TreasureHunt::startGame() {
    // code to start the game, including the main game loop
}

//gameplay functions
void TreasureHunt::drawMap() const {
    // code to draw the map on the console
}

void TreasureHunt::movePlayer(char input) {
    // code to move the player based on user input
}

void TreasureHunt::triggerClue(char landmarkSymbol) {
    // code to trigger a clue when the player lands on a landmark
}