#ifndef RationNumber_H
#define RationNumber_H

#include <string>
using namespace std;

class Card
{
public:
   static const int totalFaces = 13;
   static const int totalSuits = 4;

   Card( int cardFace, int cardSuit );
   string toString() const;
   int getFace() const
   {
      return face;
   }
   int getSuit() const
   {
      return suit;
   }
private:
   int face;
   int suit;

   static const string faceNames[ totalFaces ];
   static const string suitNames[ totalSuits ];
};

#endif

