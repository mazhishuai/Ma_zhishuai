#include <iostream>
#include "Square.h"
using namespace std;

Square::Square( double s, double x, double y )
   : TwoDimensionalShape( x, y )
{
   sideLength = ( ( s > 0.0 ) ? s : 0.0 );
}
double Square::getSideLength() const
{
   return sideLength;
}
double Square::getArea() const
{
   return sideLength * sideLength;
}
void Square::print() const
{
   cout << "Square with side length " << sideLength << "; center at ("
      << xCenter << ", " << yCenter << ")";
} /
