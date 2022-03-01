#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstdlib>
using namespace std;

/***********************FUNCTION PROTOTYPES***********************/
// Definition:
// Pre:
// Post: 
void greeting();
// Definition:
// Pre:
// Post: 
void printQuestion(int questionNumber);
// Definition:
// Pre:
// Post: 
bool isCorrect(int questionNumber, string userAnswer = "3");
// Definition:
// Pre:
// Post: 
void lifeLine(int questionNumber);
// Definition:
// Pre:
// Post: 
int answerRandomly();
// Definition:
// Pre:
// Post: 
void leave();
// Definition:
// Pre:
// Post: 
void exitMessage(int winLoseOrLeave, int winnings);
// Definition:
// Pre:
// Post: 
template <typename T>
int updateMoney(T currentMoney, T isCorrect){
    if(isCorrect){
        currentMoney *= 2;
    }
    if(!isCorrect){
        currentMoney -= 100;
    }
}

#endif