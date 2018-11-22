#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void testPositiveRange();
void testNegativePositiveRange();
void testTrig();

int main()
{

   cout << fixed << setprecision( 2 );

   testPositiveRange();
   cout << "\n\n\n";

   testNegativePositiveRange();
   cout << "\n\n\n";

   testTrig();
   cout << endl;
}
void testPositiveRange()
{

   cout << "function";

   for ( int a = 1; a < 6; a++ )
      cout << setw( 12 ) << a << ' ';

   cout << "\n\nsqrt()  ";

   for ( int b = 1; b < 6; b++ )
      cout << setw( 12 ) << sqrt( static_cast< double > ( b ) ) << ' ';

   cout << "\nexp()   ";

   for ( int c = 1; c < 6; ++c )
      cout << setw( 12 ) << exp( static_cast< double > ( c ) ) << ' ';

   cout << "\nlog()   "; /
   for ( int d = 1; d < 6; d++ )
      cout << setw( 12 ) << log( static_cast< double > ( d ) ) << ' ';

   cout << "\nlog10() ";

   for ( int e = 1; e < 6; e++ )
      cout << setw( 12 ) << log10( static_cast< double > ( e ) ) << ' ';

      cout << "\npow(2,x)";

   for ( int f = 1; f < 6; f++ )
      cout << setw( 12 ) << pow( 2.0, f ) << ' ';
}
void testNegativePositiveRange()
{
    cout << "function";


   for ( int i = -15; i < 30; i += 11 )
      cout << setw( 12 ) << i / 10.0 << ' ';

   cout << "\n\nfabs()  ";

   for ( int i = -15; i < 30; i += 11 )
      cout << setw( 12 ) << fabs( i / 10.0 ) << ' ';

   cout << "\nceil()  ";
   for ( int i = -15; i < 30; i += 11 )
      cout << setw( 12 ) << ceil( i / 10.0 ) << ' ';

   cout << "\nfloor() ";
   for ( int i = -15; i < 30; i += 11 )
      cout << setw( 12 ) << floor( i / 10.0 ) << ' ';
}
void testTrig()
{
   double pi = 3.14159;
   cout << "function";
   for ( int i = -1; i < 4; ++i )
      cout << setw( 12 ) << i * pi / 2 << ' ';

   cout << "\n\nsin()   ";
   for ( int i = -1; i < 4; i++ )
      cout << setw( 12 ) << sin( i * pi / 2 ) << ' ';

   cout << "\ncos()   ";
   for ( int i = -1; i < 4; i++ )
      cout << setw( 12 ) << cos( i * pi / 2 ) << ' ';

   cout << "\ntan()   ";
   for ( int i = -1; i < 4; i++ )
      cout << setw( 12 ) << tan( i * pi / 2 ) << ' ';
}
