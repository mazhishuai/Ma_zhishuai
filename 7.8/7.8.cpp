#include <iostream>
#include <iomanip>
using namespace std;

void wages( int [] );
void display( const int [] );

int main()
{
   int salaries[ 11 ] = {};

   cout << fixed << showpoint;
   wages( salaries );
   display( salaries );
}
void wages( int money[] )
{
   double sales;
   double i = 0.09;

   cout << "Enter employee gross sales (-1 to end): ";
   cin >> sales;

   while ( sales != -1 )
   {
      double salary = 200.0 + sales * i;
      cout << setprecision( 2 ) << "Employee Commission is $"
         << salary << '\n';

      int x = static_cast< int > ( salary ) / 100;
      money[ ( x < 10 ? x : 10 ) ]++;

      cout << "\nEnter employee gross sales (-1 to end): ";
      cin >> sales;
   }
}

void display( const int dollars[] )
{
   cout << "Employees in the range:";

   for ( int i = 2; i < 10; i++ )
      cout << "\n$" << i << "00-$" << i << "99 : " << dollars[ i ];

   cout << "\nOver $1000: " << dollars[ 10 ] << endl;
}
