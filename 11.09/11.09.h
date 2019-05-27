
#ifndef TWODAY_H
#define TWODAY_H

#include "11.09.h"

class TwoDayPackage : public Package
{
public:
   TwoDayPackage( const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double, double );

   void setFlatFee( double );
   double getFlatFee() const; e

   double calculateCost() const;
private:
   double flatFee;
};

#endif
