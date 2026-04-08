#include <iostream>
#include <fstream>
using namespace std;
// this is where all of the main game logic and flow control is implemented. This is where the main game loop is located.
#include "TreasureHunt.h"
//initial the treasurehunt class/object to start the game

TreasureHunt::TreasureHunt() : playerRow(0), playerCol(0), score(0), completedCount(0), totalLandmarks(0), gameOver(false) {}

bool TreasureHunt::loadMap(const std::string& filename) {
    // code to load the map from a file into private mapgrid vector variable. 
    //read the map file line by line and store each line as a string in the mapGrid vector. 
    //also count the total number of landmarks on the map and store it in the totalLandmarks variable. or we could just hardcode the total landmarks if we know how many there are in advance.
std::ifstream file(filename); // Open file for reading
    
    if (file.is_open()) { // Verify file was opened successfully
        std::string line;
        while (std::getline(file, line)) { // Read until a newline is found
            mapGrid.push_back(line); // Add the line to the mapGrid vector
        }
        file.close(); // Close the file (optional, destructor handles this)
    } else {
        std::cerr << "Unable to open file" << std::endl;
        return false; // Return false if file could not be opened
    }
return true;
}

void TreasureHunt::loadClues(const std::string& filename) {
    // code to load the clues from the clues text file
}

void TreasureHunt::startGame() {
    char input;
    bool runningGame = true;
    while (runningGame){
        if (!totalLandmarks == 6 && score > 0)){
            drawMap();
            // asking user input
            cout << "\n Choose your move:" << endl;
            cout << "W - move up" << endl;
            cout << "S - move down" << endl;
            cout << "A - move left" << endl;
            cout << "D - move right" << endl;
            cin >> input;
            // moves player
            movePlayer(input);
        }
        else{
            runningGame = false;
        }
    }
    return 0;
}

//gameplay functions
void TreasureHunt::drawMap() const {
    // code to draw the map on the console. print out the mapgrid vector to the console, showing the player's current position and any landmarks
    for(int i = 0; i < mapGrid.size(); i++) {{        
        for(int j = 0; j < mapGrid[i].size(); j++) {
            if(i == playerRow && j == playerCol) {
                cout << "P"; // Print player symbol
            } else {
                cout << mapGrid[i][j]; // Print the map symbol
            }
        }
        cout << endl; // New line after each row
    }}
}
void TreasureHunt::movePlayer(char input) {
    int newRow = playerRow;
    int newCol = playerCol;
    
    //calculating new position
    if (input == 'W'){
        newCol++;
    }
    else if (input == 'S'){
        newCol--;
    }
    else if(input == 'A'){
        newRow--;
    }
    else if(input == 'D'){
        newRow++;
    }
    else{
        cout << "Error! Use a valid movement key." << endl;
    }
    
    // Checking bounds
    if (!newRow == '#' && !newCol == '#'){
        playerRow = newRow;
        playerCol = newCol;
        
        // checking landmark
        if (mapGrid[newRow][newCol] == 'T' || mapGrid[newRow][newCol] == 'P' || mapGrid[newRow][newCol] == 'H' ||mapGrid[newRow][newCol] == 'U' || mapGrid[newRow][newCol] == 'G' || mapGrid[newRow][newCol] == 'F'){
            triggerClue (playerRow, playerCol);
        }
        
    }
    else{
        cout << "Out of bounds." << endl;
    }

}

void TreasureHunt::triggerClue(char landmarkSymbol) {
    // code to trigger a clue when the player lands on a landmark symbol. use the findClueBySymbol function to find the corresponding clue in the clues vector, and then display the clue's description and update the player's score and completedCount as necessary.
}
