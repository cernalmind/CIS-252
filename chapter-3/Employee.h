// employee.h
#include <string>

using namespace std;

class Employee
{
public:
  Employee( string, string, int ); 

  void setFirstName( string ); 
  string getFirstName(); 

  void setLastName( string );
  string getLastName();

  void setSalary( int );
  int getSalary();

private:
  string first_name;
  string last_name;
  int salary;
};