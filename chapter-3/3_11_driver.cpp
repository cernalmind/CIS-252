// Fig. 3.13: fig03_13.cpp
// GradeBook class demonstration after separating
// its interface from its implementation.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook

using namespace std;

// function main begins program execution
int main()
{
  // create two GradeBook objects
  GradeBook gradeBook1( "CS101 Introduction to C++ Programming", "Gordon Anderson" );
  GradeBook gradeBook2( "CS102 Data Structures in C++", "Gordon Freeman" );

  gradeBook1.displayMessage();
  gradeBook2.displayMessage();

} // end main