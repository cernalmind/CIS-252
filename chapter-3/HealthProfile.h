/**
 * In this exercise, you’ll design a “starter” HealthProfile class for
 * a person. The class attributes should include the person’s first
 * name, last name, gender, date of birth (consisting of separate
 * attributes for the month, day and year of birth), height (in
 * inches) and weight (in pounds). Your class should have a
 * constructor that receives this data. For each attribute, provide
 * set and get functions. The class also should include functions that
 * calculate and return the user’s age in years, maximum heart rate
 * and target-heart-rate range (see Exercise 3.16), and body mass
 * index (BMI; see Exercise 2.30).
 */

#include <string>

using namespace std;

class HealthProfile
{
public:
  HealthProfile( string, string, string, int, int, int, int, int ); 

  void setFirstName( string ); 
  string getFirstName(); 

  void setLastName( string );
  string getLastName();

  void setGender( string );
  string getGender();

  void setBirthDate( int, int, int );
  string getBirthDate();

  int getAge();

  void setHeight( int );
  int getHeight();

  void setWeight( int );
  int getWeight();

  float getMaximumHeartRate();
  pair<float,float> getTargetHeartRate();

  pair<float,string> getBMI();

private:
  string first_name;
  string last_name;
  string gender;
  int birth_day;
  int birth_month;
  int birth_year;
  int height;
  int weight;
};