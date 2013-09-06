/*------------------------------------------------------------------
Author:    Patrick Brown
Date:      2013-09-06
Objective: A program that asks the user to enter two integers,
           obtains the numbers from the user, then prints the larger
           number followed by the words "is larger." If the numbers
           are equal, print the message "These numbers are equal."
------------------------------------------------------------------*/
#import <iostream>

using namespace std;


int main(){
  int first;
  int second;

  cout << "Enter two integers and I will compare them." << endl;
  cout << "First integer: ";
  cin >> first;
  cout << "Second integer: ";
  cin >> second;

  if(first > second) {
    cout << first << " is larger." << endl;
  } else if(first < second) {
    cout << second << " is larger." << endl;
  } else {
    cout << "These numbers are equal." << endl;
  }
}