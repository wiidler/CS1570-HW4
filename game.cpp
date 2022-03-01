#include "game.h"
#include <iostream>
#include <cstdlib>
using namespace std;

/***********************FUNCTION DEFINITIONS***********************/
void greeting(){
    cout << "Welcome to Are you Smarter than a Comp Sci! Ready to play?" << endl;
}
void printQuestion(int questionNumber){
    switch (questionNumber){
        case 1:{
            cout << "Question 1: Which of these is not a numeric data type?" << endl << "1 - integer" << endl << "2 - double" << "3 - boolean" << "4 - float" << endl << endl;
        }
        case 2:{
            cout << "Question 2: Which of the following is a reserved c++ keyword?" << endl << "1 - buddy" << endl << "2 - friend" << endl << "3 - pal" << endl << "4 - homeslice" << endl << endl;
        }
        case 3:{
            cout << "Question 3: What does the & symbol mean in C++" << endl << "1 - address of" << endl << "2 - and" << endl << "3 - not" << endl << "4 - value of" << endl << endl;
        }
        case 4:{
            cout << "Question 4: You do not need to document your functions in CS1570" << endl << "1 - true" << endl << "2 - false" << endl << "3 - sometimes" << endl << "4 - I don't know" << endl << endl;
        }
        case 5:{
            cout << "Question 5: What is “OOP”?" << endl << "1 - Only Once Programming" << endl << "2 - Object Oriented Programming" << endl << "3 - What I say when I stub my toe" << endl << "4 - Ope, oh peanuts" << endl << endl; 
        }
        case 6:{
            cout << "Question 6: How many significant digits can a float have?" << endl << "1 - 9" << endl << "2 - 8" << endl << "3 - 7" << endl << "4 - 6" << endl << endl;
        }
        case 7:{
            cout << "Question 7: If C is 3, then C++ is:" << endl << "1 - An object oriented programming language" << endl << "2 - 4" << endl << "3 - Amazing" << endl << "4 - All of the above" << endl << endl;
        }
        case 8:{
            cout << "Question 8: What is the maximum value of a signed integer in C++?" << endl << "1 - 81" << endl << "2 - 2147483647" << endl << "3 - 11" << endl << "4 - -12" << endl << endl;
        }
        case 9:{
            cout << "Question 9: What does == do in C++?" << endl << "1 - Sets the left variable equal to the right value" << endl << "2 - Checks the validity of a data type in C++" << endl << "3 - Checks if 2 values are equal to each other" << endl << "4 - All of the above" << endl << endl;
        }
        case 10:{
            cout << "Question 10: Can you lose money in this game show?" << endl << "1 - Yes" << endl << "2 - No" << endl << "3 - Don't pick this one" << endl << "4 - Don't pick this one either" << endl << endl;
        }
        default:{
            cout << "This message should never appear, fix this!!!" << endl << endl;
        }
    }
}
bool isCorrect(int questionNumber, string userAnswer){
    return true;
}
void lifeLine(int questionNumber){
    return;
}
int answerRandomly(){
    return 69;
}
void leave(){
    return;
}
void exitMessage(int winLoseOrLeave, int winnings){
    return;
}