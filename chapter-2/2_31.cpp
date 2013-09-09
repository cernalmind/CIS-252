/*------------------------------------------------------------------
Author:    Patrick Brown
Date:      2013-09-06
Objective: Research several car-pooling websites. Create an
           application that calculates your daily driving cost, so
           that you can estimate how much money could be saved by
           car pooling, which also has other advantages such as
           reducing carbon emissions and reducing traffic congestion.
           The application should input the following information and
           display the user’s cost per day of driving to work:
              a) Total miles driven per day.
              b) Cost per gallon of gasoline.
              c) Average miles per gallon.
              d) Parking fees per day.
              e) Tolls per day.
------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int miles;
int mpg;
float cost_of_gas;
float parking_fees;
float tolls;

void prompt(string text)
{
  cout << text << ":" << endl
       << "> ";
}

void get_input()
{

  prompt("Enter total miles you drive");
  cin >> miles;
  prompt("Enter your average miles per gallon");
  cin >> mpg;
  prompt("Enter the cost of gas");
  cin >> cost_of_gas;
  prompt("Enter any parking fees in dollars");
  cin >> parking_fees;
  prompt("Enter any tolls in dollars");
  cin >> tolls;
}

float calculate_expenses()
{
  float expenses = 0;

  expenses += (miles/mpg) * cost_of_gas;
  expenses += parking_fees;
  expenses += tolls;

  return expenses;
}

float calculate_savings(int people)
{
  return calculate_expenses()*people - calculate_expenses(); 
}

int main()
{
  get_input();
  
  // set floating point to look like currency.
  cout << fixed
       << setprecision(2)
       << setfill('0');

  cout << "Expenses per person: $" << calculate_expenses() << endl
       << "Total money saved while car-pooling with:" << endl
       << "2 people: $" << calculate_savings(2)
       << "\tEach pay: $" << calculate_expenses()/2 << endl
       << "3 people: $" << calculate_savings(3)
       << "\tEach pay: $" << calculate_expenses()/3 << endl
       << "4 people: $" << calculate_savings(4)
       << "\tEach pay: $" << calculate_expenses()/4 << endl
       << "5 people: $" << calculate_savings(5)
       << "\tEach pay: $" << calculate_expenses()/5 << endl;

  return 0;
}