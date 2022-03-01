// Programmer: Will Weidler
// ID: wawq97
// Date: 2/28/22
// File: hw4.cpp
// Assignment: HW4
// Purpose: This file contains a clone of the popular game "Are you smarter than a 5th grader?".

#include "game.h"
#include <iostream>
using namespace std;

int main(){
    greeting();
    int questionNumber = 1;
    string userAnswer = "";
    while (questionNumber <= 10){
        printQuestion(questionNumber);
        cin >> userAnswer;
        if (userAnswer == "1" || userAnswer == "2" || userAnswer == "3" || userAnswer == "4"){
            userAnswer = stoi(userAnswer);
            bool results = isCorrect(questionNumber,userAnswer);
        }
        else if (userAnswer == "lifeline"){
            lifeLine(questionNumber);
        }
        else if (userAnswer == "random"){
            answerRandomly();
        }
        else if (userAnswer == "leave"){
            leave();
        }
        else{
            cout << "Please enter a valid option! (Answer 1-4 or choose 'lifeline', 'random', or 'leave'.)" << endl;
            }
        questionNumber++;
    }

    return 0;
}