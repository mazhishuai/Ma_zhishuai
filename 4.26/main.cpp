#include <iostream>
using namespace std;

int main()
{
   int number = 0;
   int num1;
   int num2;
   int num4;
   int num5;
   int nums = 0;

   while ( nums != 5 )
   {
      cout << "Enter a 5-num number: ";
      cin >> number;
      if ( number < 100000 )
      {
         if ( number > 9999 )
            nums = 5;
         else
            cout << "Number must be 5 nums" << endl;
      }
      else
         cout << "Number must be 5 numts" << endl;
   }
   num1 = number / 10000;
   num2 = number % 10000 / 1000;
   num4 = number % 10000 % 1000 % 100 / 10;
   num5 = number % 10000 % 1000 % 100 % 10;
   if ( num1 == num5 )
   {
      if ( num2 == num4 )
         cout << number << " is a palindrome!!!" << endl;
      else
         cout << number << " is not a palindrome." << endl;
   }
   else
      cout << number << " is not a palindrome." << endl;
}
