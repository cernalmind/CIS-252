#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
  Employee tom( "Tom", "Tom", 35000 );
  Employee jane( "Jane", "Doe", 60000 );

  cout << tom.getFirstName() << endl;
  cout << tom.getLastName() << endl;
  cout << tom.getSalary() << endl;
  cout << jane.getFirstName() << endl;
  cout << jane.getLastName() << endl;
  cout << jane.getSalary() << endl;

} // end main