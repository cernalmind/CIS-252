#include <iostream>
#include "HeartRates.h"

using namespace std;

int main()
{
  pair<float,float> target_heart_rate;
  string first_name;
  string last_name;
  int month;
  int day;
  int year;

  cout << "What is your first name?" << endl
       << "> ";
  cin >> first_name;

  cout << "What is your last name?" << endl
       << "> ";
  cin >> last_name;

  cout << "What month is your birthday in?" << endl
       << "> ";
  cin >> month;

  cout << "What day is your birthday on?" << endl;
  cout << "> ";
  cin >> day;

  cout << "What year where you born in?" << endl;
  cout << "> ";
  cin >> year;

  HeartRates user(first_name, last_name, month, day, year);

  target_heart_rate = user.getTargetHeartRate();

  cout << user.getFirstName() << " " << user.getLastName()
       << " (" << user.getBirthDate() << ")" << endl
       << "Your maximum heartrate is: "
       << user.getMaximumHeartRate() << endl
       << "Your target heartrate is: "
       << target_heart_rate.first << " - "
       << target_heart_rate.second << endl;
}