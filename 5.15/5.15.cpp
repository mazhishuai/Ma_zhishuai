#include <iostream>
#include <iomanip>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook( string name )
{
   setCourseName( name );
   aCount = 0;
   bCount = 0;
   cCount = 0;
   dCount = 0;
   fCount = 0;
}

void GradeBook::setCourseName( string name )
{
   if ( name.length() <= 25 )
      courseName = name;
   else
   {
      courseName = name.substr( 0, 25 );
      cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
         << "Limiting courseName to first 25 characters.\n" << endl;
   }
}

string GradeBook::getCourseName()
{
   return courseName;
}
void GradeBook::displayMessage()
{
   cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
      << endl;
}
void GradeBook::inputGrades()
{
   int grade;

   cout << "Enter the letter grades." << endl
      << "Enter the EOF character to end input." << endl;

   while ( ( grade = cin.get() ) != EOF )
   {

      switch ( grade )
      {
         case 'A':
         case 'a':
            ++aCount;
            break;

         case 'B':
         case 'b':
            ++bCount;
            break;

         case 'C':
         case 'c':
            cCount++;
            break;

         case 'D':
         case 'd':
            dCount++;
            break;

         case 'F':
         case 'f':
            fCount++;
            break;

         case '\n':
         case '\t':
         case ' ':
            break;

         default:
            cout << "Incorrect letter grade entered."
               << " Enter a new grade.\n";
            break;
      }
   }
}

void GradeBook::displayGradeReport()
{

   cout << "\n\nNumber of students who received each letter grade:"
      << "\nA: " << aCount
      << "\nB: " << bCount
      << "\nC: " << cCount
      << "\nD: " << dCount
      << "\nF: " << fCount
      << endl;

   int gradeCount = aCount + bCount + cCount + dCount + fCount;


   if ( gradeCount != 0 )
   {

      int gradeTotal = 4 * aCount + 3 * bCount + 2 * cCount + 1 * dCount;

      cout << fixed << setprecision( 1 );

      cout << "\nThe class average is: "
         << static_cast< double > ( gradeTotal ) / gradeCount
         << endl;
   }
}
