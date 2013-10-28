#include <iostream>
#include "MathTutor.h"

using namespace std;

int main()
{
    int guess;
    int answer_10;

    MathTutor tutor;
    answer_10 = 0;

    while(answer_10 < 10){

        tutor.askQuestion();
        cin >> guess;

        if(tutor.checkAnswer(guess) == true){
            answer_10++;
            tutor.generate();
        }
    } 

    return 0;
}