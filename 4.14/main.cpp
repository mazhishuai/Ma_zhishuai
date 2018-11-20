#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int account;
   double balance;
   double charges;
   double credits;
   double creditLimit;

   cout << "Enter account number (or -1 to quit): ";
   cin >> account;

   cout << fixed << setprecision( 2 );

   while ( account != -1 )
   {
      cout << "Enter beginning balance: ";
      cin >> balance;

      cout << "Enter total charges: ";
      cin >> charges;
      cout << "Enter total credits: ";
      cin >> credits;
      cout << "Enter credit limit: ";
      cin >> creditLimit;


      balance = balance + charges - credits;
      cout << "New balance is " << balance;

      if ( balance > creditLimit )
         cout << "\nAccount:      " << account
            << "\nCredit limit: " << creditLimit
            << "\nBalance:      " << balance
            << "\nCredit Limit Exceeded.";

      cout << "\n\nEnter account number (or -1 to quit): ";
      cin >> account;
   }
}
