// Fig. 3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook

using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name, string instructor )
{
  setCourseName( name ); // call set function to initialize courseName
  setInstructorName ( instructor );
}

// function to set the course name
void GradeBook::setCourseName( string name )
{
  courseName = name; // store the course name in the object
}

// function to get the course name
string GradeBook::getCourseName()
{
  return courseName; // return object's courseName
} 

void GradeBook::setInstructorName( string name )
{
  instructorName = name;
}

string GradeBook::getInstructorName()
{
  return instructorName;
}

// display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
  // call getCourseName to get the courseName
  cout << "Welcome to the grade book for\n" << getCourseName()
      << "!" << endl;
  cout << "This course presented by " << getInstructorName()
      << "." << endl;
} 