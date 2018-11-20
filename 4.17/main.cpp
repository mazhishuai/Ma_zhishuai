#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int counter = 0;
   int number;
   int largest;
   cout << "Enter the first number: ";
   cin >> largest;
   counter = counter + 1;
   while ( counter < 10 )
   {
      cout << "Enter the next number : "; // prompt for next input
      cin >> number; // get next number

      // if current number input is greater than largest number,
      // update largest
      if ( number > largest )
         largest = number;
   } // end while

   cout << "Largest is " << largest << endl; // display largest number
} // end main
