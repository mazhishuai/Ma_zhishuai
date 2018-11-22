#include <iostream>
using namespace std;

int main()
{
   char c;

   if ( ( c = cin.get() ) != EOF )
   {
      main();
      cout << c << " ";
   }
}
