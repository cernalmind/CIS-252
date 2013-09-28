/*------------------------------------------------------------------
Author:    Patrick Brown
Date:      2013-09-06
Objective: A program that reads an integer and determines and prints
           whether it’s odd or even. 
------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
  int input;

  cout << "Enter an integer and I'll tell you if it's odd or even." << endl;
  cout << "> ";
  cin >> input;

  if(input%2 == 0){
    cout << input << " is an even number." << endl;
  } else {
    cout << input << " is an odd number." << endl;
  }

  return 0;
}