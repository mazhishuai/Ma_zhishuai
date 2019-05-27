¡¢#include <iostream>
#include "Polynomial.h"
using namespace std;

Hand::Hand( DeckOfCards &deck )
   : faceCount( Card::totalFaces )
{

   for ( unsigned i = 0; i < 5; ++i )
      hand.push_back( deck.dealCard() );


   for ( unsigned i = 0; i < hand.size(); ++i )
      ++faceCount[ hand[ i ].getFace() ];
}
void Hand::print() const
{
   cout << "Hand is:\n";
   for ( unsigned i = 0; i < hand.size(); ++i )
      cout << hand[ i ].toString() << '\n';
   cout << endl;
}
bool Hand::pair() const
{
   for ( unsigned i = 0; i < faceCount.size(); ++i )
      if ( faceCount[ i ] == 2 )
         return true;

   return false;
}
bool Hand::twoPair() const
{
   bool foundOne = false;

   for ( unsigned i = 0; i < faceCount.size(); ++i )
   {
      if ( faceCount[ i ] == 2 && foundOne )
         return true;
      else if ( faceCount[ i ] == 2 )
         foundOne = true;
   }

   return false; /
}
bool Hand::threeOfAKind() const
{
   for ( unsigned i = 0; i < faceCount.size(); ++i )
      if ( faceCount[ i ] == 3 )
         return true;

   return false;
}
bool Hand::fourOfAKind() const
{
   for ( unsigned i = 0; i < faceCount.size(); ++i )
      if ( faceCount[ i ] == 4 )
         return true;

   return false;
}
bool Hand::flush() const
{
   int suit = hand[ 0 ].getSuit();

   for ( unsigned i = 1; i < hand.size(); ++i )
      if ( hand[ i ].getSuit() != suit )
         return false;

   return true;
}
bool Hand::straight() const
{
   vector< int > tmp = faceCount;
   tmp.push_back( tmp[ 0 ] );


   if ( tmp[ 0 ] == 1 && tmp[ 1 ] == 1 && tmp[ 2 ] == 1 &&
      tmp[ 3 ] == 1 && tmp[ 4 ] == 1 )
      return true;

   unsigned i = 1;
   while ( i < tmp.size() && tmp[ i ] == 0 )
      ++i;

   unsigned start = i;

   while ( i < tmp.size() && tmp[ i ] == 1 )
      ++i;

   return i == start + 5;
}
