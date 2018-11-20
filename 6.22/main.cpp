#include <iostream>
using namespace std;

void square( int );
int main()
{
   int side;

   cout << "Enter side: ";
   cin >> side;
   cout << '\n';

   square( side );
   cout << endl;
}
void square( int side )
{
   for ( int row = 1; row <= side; row = row +1  )
   {
      for ( int col = 1; col <= side; col = col + 1 )
         cout << '*';

      cout << '\n';
   }
}
