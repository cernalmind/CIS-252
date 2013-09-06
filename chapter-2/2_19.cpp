/*------------------------------------------------------------------
Author:    Patrick Brown
Date:      2013-09-06
Objective: A program that inputs three integers from the keyboard
           and prints the sum, average, product, smallest and
           largest of these numbers. 
------------------------------------------------------------------*/
#import <iostream>

using namespace std;

int smallest(int one, int two, int three)
{
  if(one < two && one < three){
    return one;
  } else if(two < three){
    return two;
  } else {
    return three;
  }
}

int largest(int one, int two, int three)
{
  if(one > two && one > three){
    return one;
  } else if(two > three){
    return two;
  } else {
    return three;
  }
}

int main()
{
  int first, second, third;
  int sum;
  float average;
  int product;

  cout << "First integer: ";
  cin >> first;
  cout << "Second integer: ";
  cin >> second;
  cout << "Third integer: ";
  cin >> third;

  // the sum
  sum = first + second + third;
  cout << "The sum: " << sum << endl;

  // the average
  average = float(sum)/3;   
  cout << "The average: " << average << endl;

  // the product
  product = first*second*third;
  cout << "The product: " << product << endl;

  // the smallest
  cout << "The smallest: " << smallest(first, second, third) << endl;

  // the largest
  cout << "The largest: " << largest(first, second, third) << endl;

  return 0;
}