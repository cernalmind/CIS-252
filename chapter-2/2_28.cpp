/*------------------------------------------------------------------
Author:    Patrick Brown
Date:      2013-09-06
Objective: Write a program that inputs a five-digit integer,
           separates the integer into its digits and prints them
           separated by three spaces each.
------------------------------------------------------------------*/
#import <iostream>

using namespace std;

int main()
{
  int input;
  cout << "Input: ";
  cin >> input;

  int ones, tens, hundreds, thousands, ten_thousands;

  ones = input%10;
  tens = input%100 - ones;
  hundreds = input%1000 - tens - ones;
  thousands = input%10000 - hundreds - tens - ones;
  ten_thousands = input%100000 - thousands - hundreds - tens - ones;

  cout << ten_thousands/10000 << " ";
  cout << thousands/1000 << " ";
  cout << hundreds/100 << " ";
  cout << tens/10 << " ";
  cout << ones << " " << endl;

  return 0;
}
