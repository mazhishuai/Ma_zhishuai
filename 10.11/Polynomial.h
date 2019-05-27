#ifndef Polynomial_H
#define Polynomial_H

#include <string>
#include <vector>
#include "Polynomial.h"
#include "DeckOfCards.h"
using namespace std;

class Hand
{
public:

   Hand( DeckOfCards &deck );
   void print() const;

   bool pair() const;
   bool twoPair() const;
   bool threeOfAKind() const;
   bool fourOfAKind() const;
   bool flush() const;
   bool straight() const;
private:
   vector< Card > hand;
   vector< int > faceCount;
};

#endif
