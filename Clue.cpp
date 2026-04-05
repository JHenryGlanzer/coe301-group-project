#include "Clue.h"
#include <cctype>

Clue::Clue() {
    symbol = ' ';
    question = "";
    answer = "";
    maxAttempts = 0;
    points = 0;
    completed = false;
}

Clue::Clue(char s, string q, string a, int attempts, int pts) {
    symbol = s;
    question = q;
    answer = a;
    maxAttempts = attempts;
    points = pts;
    completed = false;
}

char Clue::getSymbol() {
    return symbol;
}

string Clue::getQuestion() {
    return question;
}

int Clue::getMaxAttempts() {
    return maxAttempts;
}

int Clue::getPoints() {
    return points;
}

bool Clue::isCompleted() {
    return completed;
}

void Clue::setCompleted(bool status) {
    completed = status;
}


bool Clue::checkAnswer(string userAnswer) {
   
    for (int i = 0; i < userAnswer.length(); i++) {
        userAnswer[i] = tolower(userAnswer[i]);
    }
    for (int i = 0; i < answer.length(); i++) {
        answer[i] = tolower(answer[i]);
    }

    return userAnswer == answer;
}
