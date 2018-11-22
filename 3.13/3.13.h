#include <string>

using namespace std;


class Invoice
{
public:
   Invoice( string, string, int, int );

   void setPartNumber( string );
   string getPartNumber();
   void setPartDescription( string );
   string getPartDescription();
   void setPricePerItem( int );
   int getPricePerItem();
   void setQuantity( int );
   int getQuantity();

   int getInvoiceAmount();
private:
   string partNumber;
   string partDescription;
   int quantity;
   int pricePerItem;
};
