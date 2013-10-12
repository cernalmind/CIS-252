/**
 * 4_28.cpp - Checkerboard Pattern of Asterisks
 *
 * Write a program that displays the following checkerboard pattern.
 * Your program must use only three output statements, one of each of
 * the following forms:
 *    cout << "*";
 *    cout << ' ';
 *    cout << endl;
 *    * * * * * * * *
 *     * * * * * * * *
 *    * * * * * * * *
 *     * * * * * * * *
 *    * * * * * * * *
 *     * * * * * * * *
 *    * * * * * * * *
 *     * * * * * * * *
 */

#include <iostream>

using namespace std;

int main()
{
  for(int i = 0; i < 16*8; i++){
    if((((i/16)%2 == 0) && (i%2 == 0)) || (((i/16)%2 != 0) && (i%2 != 0))){
      cout << "*"; // one
    } else {
      cout << " "; // two
    }
    if(i%16 == 15){
      cout << endl; // three
    }
  }
  return 0;
}