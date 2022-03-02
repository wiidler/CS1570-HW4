#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

/***********************FUNCTION PROTOTYPES***********************/
// Definition: Greets the user
// Pre: None
// Post: None
void greeting();
// Definition: Prints the question for the user
// Pre: A question number should be supplied, 1 through 10
// Post: A cout statement
void printQuestion(int questionNumber);
// Definition: Determines if a users answer is correct based on the question 
// Pre: There needs to be a question number and answer from the user
// Post: Returns true if correct and false if wrong
bool isCorrect(int questionNumber, int userAnswer = 3);
// Definition: Gives the user an 80% chance of getting the correct answer from a "friend", it can only be used 3 times!
// Pre: A question number must be passed between 1 and 10
// Post: An answer is outputted for the user to reference
void lifeLine(int questionNumber);
// Definition: This outputs a random answer, 1 through 4
// Pre: None
// Post: A cout statement with a random answer value
void answerRandomly();
// Definition: Exits main game and user leaves with current winnings
// Pre: None
// Post: questionNumber is changed to 12 to exit the while loop and winLoseOrLeave is set to 0 indicating the player left
void leave(int & questionNumber , int & winLoseOrLeave);
// Definition: Displays a message after exiting game
// Pre: winLoseOrLeave must be defined
// Post: A certain message is outputted depending on whether the user wins, loses, or leaves, and how much money they left with
void exitMessage(int winLoseOrLeave, int winnings);
// Definition: Updates money with any numeric value "T"
// Pre: a truth value "isCorrect" and a numeric value "currentMoney"
// Post: "currentMoney" is doubled if "isCorrect" is true and is -100 if "isCorrect" is false
template <typename T>
void updateMoney(T & currentMoney, bool isCorrect){
    if(isCorrect){
        currentMoney *= 2;
    }
    if(!isCorrect){
        currentMoney -= 100;
    }
    return;
}

#endif