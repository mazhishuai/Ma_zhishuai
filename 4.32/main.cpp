#include <iostream>
using namespace std;

int main()
{
   double side1;
   double side2;
   double side3;
   bool isTriangle = false;

   cout << "Enter side 1: ";
   cin >> side1;

   cout << "Enter side 2: ";
   cin >> side2;

   cout << "Enter side 3: ";
   cin >> side3;

   if ( side1 + side2 > side3 )
   {
      if ( side2 + side3 > side1 )
      {
         if ( side3 + side1 > side2 )
            isTriangle = true;
      }
   }
   if ( isTriangle )
      cout << "These could be sides to a triangle." << endl;
   else
      cout << "These do not form a triangle." << endl;
}
