#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "MathTutor.h"

using namespace std;

MathTutor::MathTutor()
{
    srand(time(NULL));
    generate();
} 

void MathTutor::askQuestion()
{
    cout << "What is " << term1 << " x " << term2 << "?" << endl;
}

bool MathTutor::checkAnswer(int guess)
{
    if(guess == correct_answer){
        cout << "Correct!" << endl;
        return true;
    }

    cout << "Try again..." << endl;
    return false;
} 

void MathTutor::generate()
{
    term1 = rand() % 10;
    term2 = rand() % 10;

    correct_answer = term1 * term2;
} 
