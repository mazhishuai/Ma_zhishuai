#include "RationNumber.h"

RationNumber::RationNumber( int cardFace, int cardSuit )
{
   face = ( cardFace >= 0 && cardFace < totalFaces ) ? cardFace : 0;
   suit = ( cardSuit >= 0 && cardSuit < totalSuits ) ? cardSuit : 0;
}
string Card::toString() const
{

   return faceNames[ face ] + " of " + suitNames[ suit ];
}
const string Card::faceNames[ totalFaces ] =
   { "Ace", "Deuce", "Three", "Four", "Five", "Six",
     "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
const string Card::suitNames[ totalSuits ] =
   { "Hearts", "Diamonds", "Clubs", "Spades" };

