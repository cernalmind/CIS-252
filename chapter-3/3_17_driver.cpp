#include <iostream>
#include "HealthProfile.h"

using namespace std;

int main()
{
  pair<float,float> target_heart_rate;
  pair<float,string> bmi;
  string first_name;
  string last_name;
  string gender;
  int month;
  int day;
  int year;
  int height;
  int weight;

  cout << "What is your first name?" << endl
       << "> ";
  cin >> first_name;

  cout << "What is your last name?" << endl
       << "> ";
  cin >> last_name;

  cout << "What is your gender?" << endl
       << "> ";
  cin >> gender;

  cout << "What month is your birthday in?" << endl
       << "> ";
  cin >> month;

  cout << "What day is your birthday on?" << endl;
  cout << "> ";
  cin >> day;

  cout << "What year where you born in?" << endl;
  cout << "> ";
  cin >> year;
  
  cout << "What is your height in inches?" << endl;
  cout << "> ";
  cin >> height;
  
  cout << "What is you weight in pounds?" << endl;
  cout << "> ";
  cin >> weight;

  HealthProfile user(first_name, last_name, gender, month, day, year, height, weight);

  target_heart_rate = user.getTargetHeartRate();
  bmi = user.getBMI();

  cout << endl << endl << "HealthProfile:" << endl << "--------------" << endl
       << user.getFirstName() << " " << user.getLastName() << endl
       
       << "Gender: "
       << user.getGender() << endl
       
       << "DoB: "
       << user.getBirthDate() << endl
       
       << "Height: "
       << user.getHeight()/12 << "'" << user.getHeight()%12 << "\""<< endl
       
       << "Weight: "
       << user.getWeight() << "lbs" << endl
       
       << "Maximum heartrate: "
       << user.getMaximumHeartRate() << endl
       
       << "Target heartrate: "
       << target_heart_rate.first << " - "
       << target_heart_rate.second << endl

       << "BMI: "
       << bmi.first << " - " << bmi.second << endl;
}