// Programmer: Will Weidler
// ID: wawq97
// Date: 2/28/22
// File: hw4.cpp
// Assignment: HW4
// Purpose: This file contains a clone of the popular game "Are you smarter than a 5th grader?".

#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main(){
    srand(11); // sets seed of 11
    greeting();
    int questionNumber = 1; // constants to set up game
    int winLoseOrLeave = -1;
    int winnings = 100; 
    int lives = 3;
    int userAnswer = -1;
    bool answerGiven = false;
    while (questionNumber <= 10 && lives != 0){ // loops game until completion
        answerGiven = false;
        printQuestion(questionNumber);
        while (!answerGiven){ // loops user input until a valid answer is given
            string tempUserAnswer = "";
            cin >> tempUserAnswer;
            if (tempUserAnswer == "1" || tempUserAnswer == "2" || tempUserAnswer == "3" || tempUserAnswer == "4"){ // if user's input is one of the answer values
                userAnswer = stoi(tempUserAnswer);
                bool results = isCorrect(questionNumber,userAnswer);
                if (results){
                    cout << endl << "Correct!" << endl << endl;
                }
                else if (!results){ // takes lives away if answer is incorrect
                    lives--;
                    if (lives > 1){
                        cout << endl << "Incorrect. " << lives << " lives remaining." << endl << endl;
                    }
                    else if (lives == 1){
                        cout << endl << "Incorrect . " << lives << " life remaining." << endl << endl;
                    }
                }
                updateMoney(winnings, results); // updates money at end of round
                answerGiven = true; // exits current loop
                questionNumber++; // progress to next question
            }
            else if (tempUserAnswer == "lifeline"){
                lifeLine(questionNumber);
            }
            else if (tempUserAnswer == "random"){
                answerRandomly();
            }
            else if (tempUserAnswer == "leave"){
                answerGiven = true;
                leave(questionNumber, winLoseOrLeave);
            }
            else{ // if input is invalid, this statement appears to ensure player enters a valid option
                cout << endl << "Please enter a valid option! (Answer 1-4 or choose 'lifeline', 'random', or 'leave'.)" << endl;
            }
        }
    }
    if (lives == 0){ // when loop exits, if the cause was from the user running out of lives, it makes the variable -1, which will imply a loss in the exitMessage() function
        winLoseOrLeave = -1;
    }
    else if (lives > 0 && questionNumber != 69){ // when the loop exits, this else if statment occurs because the user still has rounds remaining, and questionNumber doesn't equal a number it will never be able to equal (this is done as to not overwrite the leave() functions value of 0)
        winLoseOrLeave = 1;
    }
    exitMessage(winLoseOrLeave, winnings);
    return 0;
}