#include <iostream>
using namespace std;

int main()
{
   int product = 1;


   for ( int i = 3; i <= 15; i += 2 )
      product *= i;

   cout << "Product of the odd integers from 1 to 15 is:  "
      << product << endl;
}
