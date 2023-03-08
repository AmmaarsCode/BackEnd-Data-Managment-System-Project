#include "StoreItem.h"

// - STORE ITEM
// ---------------------------------------------------------------------

/**
StoreItem constructor
Initialize `m_name` to "unset", `m_price` to 0, and `m_productType` to "unset".
*/
StoreItem::StoreItem() {
  m_name = "unset";
  m_price = 0;
  m_productType = "unset";
}

/**
SetName
@param  name    the input value; a new name to give this item.
Assigns the private member `m_name` the value passed in as the `name` parameter.
*/
void StoreItem::SetName(string name) { m_name = name; }

/**
SetPrice
@param  price    the input value; a new price to give this item.
Assigns the private member `m_price` the value passed in as the `price`
parameter.
*/
void StoreItem::SetPrice(float price) {
  // Don't allow a negative or 0 price to be set
  if (price > 0) {
    m_price = price;
  }
}

/**
SetProductType
@param  productType    the input value; a new product type to give this item.
Assigns the private member `m_productType` the value passed in as the
`productType` parameter.
*/
void StoreItem::SetProductType(string productType) {
  m_productType = productType;
}

/**
GetName
@return the value stored in the private member variable `m_name`.
*/
string StoreItem::GetName() { return m_name; }

/**
GetPrice
@return the value stored in the private member variable `m_price`.
*/
float StoreItem::GetPrice() { return m_price; }

/**
GetProductType
@return the value stored in the private member variable `m_productType`.
*/
string StoreItem::GetProductType() { return m_productType; }

// - BOOK ---------------------------------------------------------------------

/**
Book constructor
Initialize:
* `m_name` to "unset"
* `m_price` to 0
* `m_productType` to "book"
* `m_author` to "unset"
* `m_isbn13` to "unset"
* `m_coverType` to 0
*/
Book::Book() // TO UPDATE
{}

/**
SetAuthor
@param  author    the input value; a new author to give this item.
Assigns the private member `m_author` the value passed in as the `author`
parameter.
*/
void Book::SetAuthor(string author) // TO UPDATE
{
  m_author = author;
}

/**
GetAuthor
@return the value stored in the private member variable `m_author`.
*/
string Book::GetAuthor() // TO UPDATE
{
  return m_author; // THIS IS A PLACEHOLDER. REMOVE THIS LINE WHEN YOU IMPLEMENT
                 // THE FUNCTION.
  //    return m_author;
}

/**
SetIsbn13
@param  isbn13    the input value; a new author to give this item.
Assigns the private member `m_isbn13` the value passed in as the `isbn13`
parameter.
*/
void Book::SetIsbn13(string isbn13) // TO UPDATE
{
  m_isbn13 = isbn13;
}

/**
GetIsbn13
@return the value stored in the private member variable `m_isbn13`.
*/
string Book::GetIsbn13() // TO UPDATE
{
  return m_isbn13; // THIS IS A PLACEHOLDER. REMOVE THIS LINE WHEN YOU IMPLEMENT
                 // THE FUNCTION.
}

/**
SetCoverType
@param  coverType    the input value; a new author to give this item.
Assigns the private member `m_coverType` the value passed in as the `coverType`
parameter.
*/
void Book::SetCoverType(int coverType) // TO UPDATE
{
    m_coverType = coverType;
}

/**
GetCoverType
@return the value stored in the private member variable `m_coverType`.
*/
int Book::GetCoverType() // TO UPDATE
{
  return m_coverType; // THIS IS A PLACEHOLDER. REMOVE THIS LINE WHEN YOU IMPLEMENT THE
            // FUNCTION.
}

/**
GetCoverTypeString
@return A string label based on what the value of the `m_coverType` is:
    * 1 returns "Hardcover"
    * 2 returns "Paperback"
    * anything else returns "Unknown".
*/
string Book::GetCoverTypeString() // TO UPDATE
{
  if (m_coverType == 1){
  return "Hardcover";
    }
  else if (m_coverType == 2){
  return "Paperback";
    }
  return "Unknown"; // THIS IS A PLACEHOLDER. REMOVE THIS LINE WHEN YOU IMPLEMENT
                 // THE FUNCTION.
}
