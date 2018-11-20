#include <iostream>
using namespace std;

int main()
{
   double gallons;
   double miles;
   double totalGallons = 0;
   double totalMiles = 0;

   double MPG;
   double TotalMPG;
   cout << "Enter miles driven (-1 to quit): ";
   cin >> miles;
   cout << fixed;
   while ( miles != -1 )
   {
      cout << "Enter gallons used: ";
      cin >> gallons;
      totalMiles += miles;
      totalGallons += gallons;

      if ( gallons != 0 )
      {
         MPG =  miles / gallons;
         cout << "MPG this tankful: " << MPG;
      }
      if ( totalGallons != 0 )
      {
         TotalMPG = totalMiles / totalGallons;
         cout << "\nTotal MPG: " << TotalMPG;
      }
      cout << "\n\nEnter miles driven (-1 to quit): ";
      cin >> miles;
   }
}
