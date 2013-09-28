/*------------------------------------------------------------------------------
Create a class called Employee that includes three pieces of information as
data members—a first name (type string), a last name (type string) and a
monthly salary (type int). 
------------------------------------------------------------------------------*/

#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee( string first, string last, int init_salary )
{
  setFirstName( first );
  setLastName( last );
  setSalary( init_salary );
} 

void Employee::setFirstName( string first )
{
  first_name = first;
}
string Employee::getFirstName() 
{
  return first_name;
}

void Employee::setLastName( string last )
{
  last_name = last;
}
string Employee::getLastName()
{
  return last_name;
}

void Employee::setSalary( int s )
{
  salary = s;
}
int Employee::getSalary()
{
  return salary;
}

