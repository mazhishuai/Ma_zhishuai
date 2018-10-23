#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int account;
    double balance;
    double charge;
    double credit;
    double limit;

    cout<<"Enter account number (or -1 to quit): ";
    cin>>account;

    while (account != -1)
      cout<<"Enter beginning balance: ";
      cin>>balance;
      cout<<"Enter total charges: ";
      cin>>charge;
      cout<<"Enter total credits: ";
      cin>>credit;
      cout<<"Enter credit limit: ";
      cin>>limit;
      if(balance>limit)
          int balance = ( balance + charge - credit );
          cout<<"New balance is "<<balance<<endl;
          cout<<"Account:     "<<account<<endl;
          cout<<"Credit limit:"<<limit<<endl;
          cout<<"Balance:     "<<balance<<endl;
          cout<<"Credit Limit Exceeded.";
          cout<<endl<<endl;
}
