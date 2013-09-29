/**
 * HeartRates.h
 * 1. Create a class called HeartRates.
 * 2. The class attributes should include the person’s first name,
 *    last name and date of birth (consisting of separate attributes
 *    for the month, day and year of birth).
 * 3. Your class should have a constructor that receives this data as
 *    parameters.
 * 4. For each attribute provide set and get functions.
 * 5. The class also should include a function getAge that calculates
 *    and returns the person’s age (in years), a function
 *    getMaxiumumHeartRate that calculates and returns the person’s
 *    maximum heart rate and a function getTargetHeartRate that
 *    calculates and returns the person’s target heart rate.
 * 6. Since you do not yet know how to obtain the current date from
 *    the computer, function getAge should prompt the user to enter
 *    the current month, day and year before calculating the person’s
 *    age.
 * 7. Write an application that prompts for the person’s information,
 *    instantiates an object of class HeartRates and prints the
 *    information from that object - including the person’s first
 *    name, last name and date of birth - then calculates and prints
 *    the person’s age in (years), maximum heart rate and
 *    target-heart-rate range.
 */

#include <utility>
#include <string>

using namespace std;

class HeartRates
{
public:
  HeartRates( string, string, int, int, int ); 

  void setFirstName( string ); 
  string getFirstName(); 

  void setLastName( string );
  string getLastName();

  void setBirthDate( int, int, int );
  string getBirthDate();

  int getAge();

  float getMaximumHeartRate();
  pair<float,float> getTargetHeartRate();

private:
  string first_name;
  string last_name;
  int birth_day;
  int birth_month;
  int birth_year;
};