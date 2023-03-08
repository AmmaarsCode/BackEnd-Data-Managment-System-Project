// You don't need to update this file.

#ifndef _STOREITEM
#define _STOREITEM

#include <string>
using namespace std;

// - STORE ITEM
// --------------------------------------------------------------------- A
// generic class that contains data that all items in the store would have.
//
// UML:
// StoreItem
// ------------------------
// - m_productType : string
// - m_name : string
// - m_price : float
// ------------------------
// + StoreItem()
// + SetName( name : string ) : void
// + GetName() : string
// + SetPrice( price : float ) : void
// + GetPrice() : float
// + SetProductType( productType : string ) : void
// + GetProductType : string
class StoreItem // Done
{
public:
  // Constructor
  StoreItem();

  void SetName(string name);
  string GetName();

  void SetPrice(float price);
  float GetPrice();

  void SetProductType(string productType);
  string GetProductType();

protected:
  string m_productType;
  string m_name;
  float m_price;

  friend class Tester; // Do not remove!
};

// - BOOK ---------------------------------------------------------------------
// Create Book class. It should inherit from StoreItem.
//
// UML:
// Book : public StoreItem
// ------------------------
// - m_author : string
// - m_isbn13 : string
// - m_coverType : int
// ------------------------
// + Book()
// + SetAuthor( author : string ) : void
// + GetAuthor() : string
// + SetIsbn13( isbn13 : string ) : void
// + GetIsbn13() : string
// + SetCoverType( coverType : int ) : void
// + GetCoverType() : int
// + GetCoverTypeString() : string
//
// ALSO ADD THIS LINE within the class declaration:
// friend class Tester;
// (See the StoreItem for an example.)
class Book : public StoreItem {
public:
  Book(); // Constructor

  void SetAuthor(string author);
  string GetAuthor();

  void SetIsbn13(string isbn13);
  string GetIsbn13();

  void SetCoverType(int coverType);
  int GetCoverType();
  string GetCoverTypeString();

protected:
  string m_author;
  string m_isbn13;
  int m_coverType; // 1 for hard cover, 2 for paper back

  friend class Tester; // Do not remove!
};

#endif
