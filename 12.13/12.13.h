#ifndef SQUARE_H
#define SQUARE_H

#include "TwoDimensionalShape.h"

class Square : public TwoDimensionalShape
{
public:

   Square( double = 0.0, double = 0.0, double = 0.0 );

   virtual double getSideLength() const;
   virtual double getArea() const;
   void print() const;
private:
   double sideLength;
};

#endif
