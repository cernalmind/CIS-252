/**
 * 4_26.cpp - Palindromes
 *
 * A palindrome is a number or a text phrase that reads the same
 * backward as forward. For example, each of the following five-digit
 * integers is a palindrome: 12321, 55555, 45554 and 11611. Write a
 * program that reads in a five-digit integer and determines whether
 * it’s a palindrome. [Hint: Use the division and modulus operators to
 * separate the number into its individual digits.]
 */

#include <iostream>

using namespace std;

int main()
{
  int input;
  int digit_one, digit_two, digit_three, digit_four, digit_five;

  cout << "Enter a 5 digit number: ";
  cin >> input;

  if(input > 99999){
    cout << "That number is too large." << endl;
    return 0;
  } else if(input < 10000){
    cout << "That number is too small." << endl;
    return 0;
  }

  digit_one = input%10;
  digit_two = input%100 - digit_one;
  digit_three = input%1000 - digit_two - digit_one;
  digit_four = input%10000 - digit_three - digit_two - digit_one;
  digit_five = input%100000 - digit_four - digit_three - digit_two - digit_one;

  if(digit_one != digit_five/10000){
    cout << input << " is not a palindrome." << endl;
    return 0;
  } else if(digit_two/10 != digit_four/1000){
    cout << input << " is not a palindrome." << endl;
    return 0;
  } else {
    cout << input << " is a palindrome." << endl;
    return 0;
  }
}