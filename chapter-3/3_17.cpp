#include <iostream>
#include <sstream>
#include "HealthProfile.h"

using namespace std;

HealthProfile::HealthProfile(string first, string last, string gender,
                             int month, int day, int year,
                             int height, int weight)
{
  setFirstName(first);
  setLastName(last);
  setGender(gender);
  setBirthDate(month, day, year);
  setHeight(height);
  setWeight(weight);
} 

void HealthProfile::setFirstName(string first)
{
  first_name = first;
} 
string HealthProfile::getFirstName()
{
  return first_name;
} 

void HealthProfile::setLastName( string last )
{
  last_name = last;
}
string HealthProfile::getLastName()
{
  return last_name;
}

void HealthProfile::setGender( string new_gender)
{
  gender = new_gender;
}
string HealthProfile::getGender()
{
  return gender;
}

void HealthProfile::setBirthDate(int month, int day, int year)
{
  birth_month = month;
  birth_day = day;
  birth_year = year;
}
string HealthProfile::getBirthDate()
{
  string birthdate;
  ostringstream convert;

  convert << birth_month << "/" << birth_day << "/" << birth_year;
  
  return convert.str();
}

int HealthProfile::getAge()
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

void HealthProfile::setHeight(int new_height)
{
  height = new_height;
}
int HealthProfile::getHeight(){
  return height;
}

void HealthProfile::setWeight(int new_weight)
{
  weight = new_weight;
}
int HealthProfile::getWeight()
{
  return weight;
}

/**
 * The formula for calculating your maximum heart rate in beats per
 * minute is 220 minus your age in years.
 */

float HealthProfile::getMaximumHeartRate()
{ 
  return 220 - getAge();
}

/**
 * Your target heart rate is a range that is 50–85% of your maximum
 * heart rate.
 */

pair<float,float> HealthProfile::getTargetHeartRate()
{
  float max_heart_rate;
  max_heart_rate = getMaximumHeartRate();

  return make_pair(max_heart_rate*.5, max_heart_rate*.85);
}

/**
 * BMI VALUES
 * Underweight: less than 18.5
 * Normal: between 18.5 and 24.9
 * Overweight: between 25 and 29.9
 * Obese: Greater than 30
 */

pair<float,string> HealthProfile::getBMI()
{
  float bmi;
  string meaning;

  bmi = (getWeight()*703.0)/(getHeight()*getHeight());

  if(bmi < 18.5){
    meaning = "Underweight";
  } else if(bmi < 24.9){
    meaning = "Normal";
  } else if(bmi < 29.9){
    meaning = "Overweight";
  } else {
    meaning = "Obese";
  }

  return make_pair(bmi, meaning);
}