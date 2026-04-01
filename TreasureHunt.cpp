// this is where all of the main game logic and flow control is implemented. This is where the main game loop is located.
#include "TreasureHunt.h"
//initial the treasurehunt class/object to start the game

TreasureHunt::TreasureHunt() : playerRow(0), playerCol(0), score(0), completedCount(0), totalLandmarks(0), gameOver(false) {}


void TreasureHunt::loadMap(const std::string& filename) {
    // code to load the map from a file into private mapgrid vector variable. read the map file line by line and store each line as a string in the mapGrid vector. also count the total number of landmarks on the map and store it in the totalLandmarks variable.
}

void TreasureHunt::loadClues(const std::string& filename) {
    // code to load the clues from the clues text file
}

void TreasureHunt::startGame() {
    // code to start the game, including the main game loop
}

//gameplay functions
void TreasureHunt::drawMap() const {
    // code to draw the map on the console. print out the mapgrid vector to the console, showing the player's current position and any landmarks
}

void TreasureHunt::movePlayer(char input) {
    // code to move the player based on user input. update the playerRow and playerCol variables accordingly, and check for any collisions with landmarks or boundaries of the map. if the player lands on a landmark, call the triggerClue function to handle the clue associated with that landmark.
}

void TreasureHunt::triggerClue(char landmarkSymbol) {
    // code to trigger a clue when the player lands on a landmark symbol. use the findClueBySymbol function to find the corresponding clue in the clues vector, and then display the clue's description and update the player's score and completedCount as necessary.
}