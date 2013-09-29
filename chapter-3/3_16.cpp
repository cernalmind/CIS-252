#include <iostream>
#include <sstream>
#include "HeartRates.h"

using namespace std;

HeartRates::HeartRates(string first, string last, int month, int day, int year)
{
  setFirstName(first);
  setLastName(last);
  setBirthDate(month, day, year);
} 

void HeartRates::setFirstName(string first)
{
  first_name = first;
} 
string HeartRates::getFirstName()
{
  return first_name;
} 

void HeartRates::setLastName( string last )
{
  last_name = last;
}
string HeartRates::getLastName()
{
  return last_name;
}

void HeartRates::setBirthDate(int month, int day, int year)
{
  birth_month = month;
  birth_day = day;
  birth_year = year;
}
string HeartRates::getBirthDate()
{
  string birthdate;
  ostringstream convert;

  convert << birth_month << "/" << birth_day << "/" << birth_year;
  
  return convert.str();
}

int HeartRates::getAge()
{
  int current_year;
  int age;

  cout << "Enter the current year: ";
  cin >> current_year;

  // Coding my own DateTime model would be quite the endeavor;
  // for now this will have to do.
  age = current_year - birth_year;

  return age;
}

/**
 * The formula for calculating your maximum heart rate in beats per
 * minute is 220 minus your age in years.
 */

float HeartRates::getMaximumHeartRate()
{ 
  return 220 - getAge();
}

/**
 * Your target heart rate is a range that is 50–85% of your maximum
 * heart rate.
 */

pair<float,float> HeartRates::getTargetHeartRate()
{
  float max_heart_rate;
  max_heart_rate = getMaximumHeartRate();

  return make_pair(max_heart_rate*.5, max_heart_rate*.85);
}