#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double hours;
   double rate;
   double salary;
   cout << "Enter hours worked (-1 to end): ";
   cin >> hours;
   cout << fixed << setprecision( 2 );

   while ( hours != -1.0 )
   {
      cout << "Enter hourly rate of the employee ($00.00): ";
      cin >> rate;
      if ( hours <= 40 )
         salary = hours * rate;
      else
         salary = 40.0 * rate + ( hours - 40.0 ) * rate * 1.5;

      cout << "Salary is $" << salary;
      cout << "\n\nEnter hours worked (-1 to end): ";
      cin >> hours;
   }
}
