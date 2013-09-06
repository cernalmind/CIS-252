/*------------------------------------------------------------------
Author:    Patrick Brown
Date:      2013-09-03
Objective: Simple game where player guesses a random number and the
           computer tells them if their guess was too low or too
           high.
------------------------------------------------------------------*/
#include <iostream>
#include <stdlib.h>


int main()
{
  int number;
  int guess;

  // random seed
  srand(time(NULL));

  number = rand() % 100 + 1;

  std::cout << "I'm thinking of a number between 1 and 100." << std::endl;

  while(guess != number)
  {
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    if(guess < number){
      std::cout << "Too low!" << std::endl;
    } else if(guess > number) {
      std::cout << "Too high!" << std::endl;
    }
  }

  std::cout << "Congrats: You win!" << std::endl;

  return 0;
}