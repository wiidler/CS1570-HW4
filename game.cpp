#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

/***********************FUNCTION DEFINITIONS***********************/
void greeting(){
    cout << "Welcome to Are you Smarter than a Comp Sci! Ready to play?" << endl << endl;
}
void printQuestion(int questionNumber){
    switch (questionNumber){
        case 1:{
            cout << "Question 1: Which of these is not a numeric data type?" << endl << "1 - integer" << endl << "2 - double" << endl << "3 - boolean" << endl << "4 - float" << endl << endl;
            break;
        }
        case 2:{
            cout << "Question 2: Which of the following is a reserved c++ keyword?" << endl << "1 - buddy" << endl << "2 - friend" << endl << "3 - pal" << endl << "4 - homeslice" << endl << endl;
            break;
        }
        case 3:{
            cout << "Question 3: What does the & symbol mean in C++?" << endl << "1 - address of" << endl << "2 - and" << endl << "3 - not" << endl << "4 - value of" << endl << endl;
            break;
        }
        case 4:{
            cout << "Question 4: You do not need to document your functions in CS1570" << endl << "1 - true" << endl << "2 - false" << endl << "3 - sometimes" << endl << "4 - I don't know" << endl << endl;
            break;
        }
        case 5:{
            cout << "Question 5: What is 'OOP'?" << endl << "1 - Only Once Programming" << endl << "2 - Object Oriented Programming" << endl << "3 - What I say when I stub my toe" << endl << "4 - Ope, oh peanuts" << endl << endl; 
            break;
        }
        case 6:{
            cout << "Question 6: How many significant digits can a float have?" << endl << "1 - 9" << endl << "2 - 8" << endl << "3 - 7" << endl << "4 - 6" << endl << endl;
            break;
        }
        case 7:{
            cout << "Question 7: If C is 3, then C++ is:" << endl << "1 - An object oriented programming language" << endl << "2 - 4" << endl << "3 - Amazing" << endl << "4 - All of the above" << endl << endl;
            break;
        }
        case 8:{
            cout << "Question 8: What is the maximum value of a signed integer in C++?" << endl << "1 - 81" << endl << "2 - 2147483647" << endl << "3 - 11" << endl << "4 - -12" << endl << endl;
            break;
        }
        case 9:{
            cout << "Question 9: What does == do in C++?" << endl << "1 - Sets the left variable equal to the right value" << endl << "2 - Checks the validity of a data type in C++" << endl << "3 - Checks if 2 values are equal to each other" << endl << "4 - All of the above" << endl << endl;
            break;
        }
        case 10:{
            cout << "Question 10: Can you lose money in this game show?" << endl << "1 - Yes" << endl << "2 - No" << endl << "3 - Don't pick this one" << endl << "4 - Don't pick this one either" << endl << endl;
            break;
        }
        default:{
            cout << "This message should never appear, fix this!!!" << endl << endl;
        }
    }
}
bool isCorrect(int questionNumber, int userAnswer){
    switch (questionNumber){
        case 1:{
            if (userAnswer == 1 || userAnswer == 2 || userAnswer == 4){
                return false;
            }
            else if (userAnswer == 3){
                return true;
            }
            break;
        }
        case 2:{
            if (userAnswer == 1 || userAnswer == 3 || userAnswer == 4){
                return false;
            }
            else if (userAnswer == 2){
                return true;
            }
            break;   
        }
        case 3:{
            if (userAnswer == 2 || userAnswer == 3 || userAnswer == 4){
                return false;
            }
            else if (userAnswer == 1){
                return true;
            }
            break;
        }
        case 4:{
            if (userAnswer == 1 || userAnswer == 3 || userAnswer == 4){
                return false;
            }
            else if (userAnswer == 2){
                return true;
            }
            break;
        }
        case 5:{
            if (userAnswer == 1 || userAnswer == 3 || userAnswer == 4){
                return false;
            }
            else if (userAnswer == 2){
                return true;
            }
            break;
        }
        case 6:{
            if (userAnswer == 1 || userAnswer == 3 || userAnswer == 2){
                return false;
            }
            else if (userAnswer == 4){
                return true;
            }
            break;
        }
        case 7:{
            if (userAnswer == 1 || userAnswer == 3 || userAnswer == 2){
                return false;
            }
            else if (userAnswer == 4){
                return true;
            }
            break;
        }
        case 8:{
            if (userAnswer == 1 || userAnswer == 3 || userAnswer == 4){
                return false;
            }
            else if (userAnswer == 2){
                return true;
            }
            break;
        }
        case 9:{
            if (userAnswer == 1 || userAnswer == 2 || userAnswer == 4){
                return false;
            }
            else if (userAnswer == 3){
                return true;
            }
            break;
        }
        case 10:{
            if (userAnswer == 2 || userAnswer == 3 || userAnswer == 4){
                return false;
            }
            else if (userAnswer == 1){
                return true;
            }
            break;
        }
    }
    return false;
}
void lifeLine(int questionNumber){
    static int uses = 3;
    if (uses > 0){
        int chance = (rand() % 10) + 1;
        if(chance <= 8){
            switch(questionNumber){
                case 1:{
                    cout << endl << "Your friend said the answer is 3. What is your answer?" << endl;
                    break;
                }
                case 2:{
                    cout << endl << "Your friend said the answer is 2. What is your answer?" << endl;
                    break;
                }
                case 3:{
                    cout << endl << "Your friend said the answer is 1. What is your answer?" << endl;
                    break;
                }
                case 4:{
                    cout << endl << "Your friend said the answer is 2. What is your answer?" << endl;
                    break;
                }
                case 5:{
                    cout << endl << "Your friend said the answer is 2. What is your answer?" << endl;
                    break;
                }
                case 6:{
                    cout << endl << "Your friend said the answer is 4. What is your answer?" << endl;
                    break;
                }
                case 7:{
                    cout << endl << "Your friend said the answer is 4. What is your answer?" << endl;
                    break;
                }
                case 8:{
                    cout << endl << "Your friend said the answer is 2. What is your answer?" << endl;
                    break;
                }
                case 9:{
                    cout << endl << "Your friend said the answer is 3. What is your answer?" << endl;
                    break;
                }
                case 10:{
                    cout << endl << "Your friend said the answer is 1. What is your answer?" << endl;
                    break;
                }
            }
        }
        else if (chance > 8){
            int randomFalse = 0;
            switch(questionNumber){
                case 1:{
                    randomFalse = (rand() % 3) + 1;
                    if (randomFalse == 3){
                        randomFalse = 4;
                    }
                    cout << endl << "Your friend said the answer is " << randomFalse << " . What is your answer?" << endl;
                    break;
                }
                case 2:{
                    randomFalse = (rand() % 3) + 1;
                    if (randomFalse == 2){
                        randomFalse = 4;
                    }
                    cout << endl << "Your friend said the answer is " << randomFalse << " . What is your answer?" << endl;
                    break;
                }
                case 3:{
                    randomFalse = (rand() % 3) + 1;
                    if (randomFalse == 1){
                        randomFalse = 4;
                    }
                    cout << endl << "Your friend said the answer is " << randomFalse << " . What is your answer?" << endl;
                    break;
                }
                case 4:{
                    randomFalse = (rand() % 3) + 1;
                    if (randomFalse == 2){
                        randomFalse = 4;
                    }
                    cout << endl << "Your friend said the answer is " << randomFalse << " . What is your answer?" << endl;
                    break;
                }
                case 5:{
                    randomFalse = (rand() % 3) + 1;
                    if (randomFalse == 2){
                        randomFalse = 4;
                    }
                    cout << endl << "Your friend said the answer is " << randomFalse << " . What is your answer?" << endl;
                    break;
                }
                case 6:{
                    randomFalse = (rand() % 3) + 1;
                    cout << endl << "Your friend said the answer is " << randomFalse << " . What is your answer?" << endl;
                    break;
                }
                case 7:{
                    randomFalse = (rand() % 3) + 1;
                    cout << endl << "Your friend said the answer is " << randomFalse << " . What is your answer?" << endl;
                    break;
                }
                case 8:{
                    randomFalse = (rand() % 3) + 1;
                    if (randomFalse == 2){
                        randomFalse = 4;
                    }
                    cout << endl << "Your friend said the answer is " << randomFalse << " . What is your answer?" << endl;
                    break;
                }
                case 9:{
                    randomFalse = (rand() % 3) + 1;
                    if (randomFalse == 3){
                        randomFalse = 4;
                    }
                    cout << endl << "Your friend said the answer is " << randomFalse << " . What is your answer?" << endl;
                    break;
                }
                case 10:{
                    randomFalse = (rand() % 3) + 1;
                    if (randomFalse == 1){
                        randomFalse = 4;
                    }
                    cout << endl << "Your friend said the answer is " << randomFalse << " . What is your answer?" << endl;
                    break;
                }
            }            
        }
    uses--;
    }
    else{
        cout << endl << "You've run out of lifelines! What is your answer?" << endl;
    }
    return;
}
void answerRandomly(){
    int randomGuess = (rand() % 4) + 1;
    cout << endl << "You thought of the number " << randomGuess << ". What is your answer?" << endl;
    return;
}
void leave(int & questionNumber , int & winLoseOrLeave){
    winLoseOrLeave = 0;
    questionNumber = 69;
    return;
}
void exitMessage(int winLoseOrLeave, int winnings){
    if(winLoseOrLeave == -1){
        winnings = 0;
        cout << "You lost, and walked away with $" << winnings << "." << endl;
    }
    else if (winLoseOrLeave == 0){
        if (winnings >= 0){
            cout <<  "You walked away with $" << winnings << "." << endl;
        }
        else if (winnings < 0) {
            winnings = abs(winnings);
            cout <<  "You walked away with -$" << winnings << "." << endl;
        }
    }
    else if (winLoseOrLeave == 1){
        if (winnings >= 0){
            cout << "Congratulations, you won! You walked away with $" << winnings << "." << endl;
        }
        else if (winnings < 0){
            winnings = abs(winnings);
            cout << "Congratulations, you won! You walked away... owing $" << winnings << "? Sorry about that." << endl;
        }
    }
    return;
}