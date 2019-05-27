#ifndef 11.10_H
#define 11.10_H

class Account
{
public:
   Account( double );
   void credit( double );
   bool debit( double );
   void setBalance( double );
   double getBalance();
private:
   double balance;
};

#endif
