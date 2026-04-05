#ifndef CLUE_H
#define CLUE_H

#include <string>
using namespace std;

class Clue {
private:
    char symbol;
    string question;
    string answer;
    int maxAttempts;
    int points;
    bool completed;

public:
    Clue();
    Clue(char s, string q, string a, int attempts, int pts);

    char getSymbol();
    string getQuestion();
    int getMaxAttempts();
    int getPoints();
    bool isCompleted();

    void setCompleted(bool status);

    bool checkAnswer(string userAnswer);
};

#endif
