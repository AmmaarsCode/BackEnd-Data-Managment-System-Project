// You don't need to update this file.

#include "Tester.h"

#include "Program.h"
#include "StoreItem.h"
#include "Utilities.h"

#include <fstream>
#include <iostream>
using namespace std;

/**
Unit tests to validate work
(No need to edit)
*/

void Tester::Test_StoreItems() {
  string testFilename = "test_result-StoreItems.txt";
  ofstream testOutput(testFilename);
  cout << "Test results will be output to \"" << testFilename << "\"" << endl;

  testOutput << endl
             << string(100, '-') << endl
             << "Test_StoreItems" << endl
             << endl;
  int totalTestsRan = 0;
  int totalTestsPass = 0;
  int totalTestsFail = 0;

  { // TEST BEGIN - void StoreItem::SetName( string name )
    string testResult = "";
    totalTestsRan++;

    StoreItem storeItem;

    string input = "abcd";
    storeItem.SetName(input);

    string expectedResult = "abcd";
    string actualResult = storeItem.m_name;

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: void StoreItem::SetName( string name )" << endl;
    testOutput << "* Calling storeItem.SetName( \"" << input << "\" );" << endl;
    testOutput << "* Expecting storeItem.m_name to be: \"" << expectedResult
               << "\"" << endl;
    testOutput << "* Actual value of storeItem.m_name: \"" << actualResult
               << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - string StoreItem::GetName()
    string testResult = "";
    totalTestsRan++;

    StoreItem storeItem;

    string input = "abcd";
    storeItem.m_name = input;

    string expectedResult = "abcd";
    string actualResult = storeItem.GetName();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult << "] TEST: string StoreItem::GetName()"
               << endl;
    testOutput << "* Setting storeItem.m_name to \"" << input << "\"." << endl;
    testOutput << "* Expecting storeItem.GetName() to return: \""
               << expectedResult << "\"" << endl;
    testOutput << "* Actual return of storeItem.GetName():    \""
               << actualResult << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - void StoreItem::SetProductType( string productType )
    string testResult = "";
    totalTestsRan++;

    StoreItem storeItem;

    string input = "abcd";
    storeItem.SetProductType(input);

    string expectedResult = "abcd";
    string actualResult = storeItem.m_productType;

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: void StoreItem::SetProductType( string productType )"
               << endl;
    testOutput << "* Calling storeItem.SetProductType( \"" << input << "\" );"
               << endl;
    testOutput << "* Expecting storeItem.m_productType to be: \""
               << expectedResult << "\"" << endl;
    testOutput << "* Actual value of storeItem.m_productType: \""
               << actualResult << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - string StoreItem::GetProductType()
    string testResult = "";
    totalTestsRan++;

    StoreItem storeItem;

    string input = "abcd";
    storeItem.m_productType = input;

    string expectedResult = "abcd";
    string actualResult = storeItem.GetProductType();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: string StoreItem::GetProductType()" << endl;
    testOutput << "* Setting storeItem.m_productType to \"" << input << "\"."
               << endl;
    testOutput << "* Expecting storeItem.GetProductType() to return: \""
               << expectedResult << "\"" << endl;
    testOutput << "* Actual return of storeItem.GetProductType():    \""
               << actualResult << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - void StoreItem::SetPrice( float price )
    string testResult = "";
    totalTestsRan++;

    StoreItem storeItem;

    float input = 9.99;
    storeItem.SetPrice(input);

    float expectedResult = 9.99;
    float actualResult = storeItem.m_price;

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: void StoreItem::SetPrice( float price )" << endl;
    testOutput << "* Calling storeItem.SetPrice( " << input << " );" << endl;
    testOutput << "* Expecting storeItem.m_price to be: " << expectedResult
               << endl;
    testOutput << "* Actual value of storeItem.m_price: " << actualResult
               << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - float StoreItem::GetPrice()
    string testResult = "";
    totalTestsRan++;

    StoreItem storeItem;

    float input = 11.22;
    storeItem.m_price = input;

    float expectedResult = 11.22;
    float actualResult = storeItem.GetPrice();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult << "] TEST: float StoreItem::GetPrice()"
               << endl;
    testOutput << "* Setting storeItem.m_price to \"" << input << "\"." << endl;
    testOutput << "* Expecting storeItem.GetPrice() to return: "
               << expectedResult << "" << endl;
    testOutput << "* Actual return of storeItem.GetPrice():    " << actualResult
               << "" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN
    string testResult = "";
    totalTestsRan++;

    StoreItem storeItem;

    string input = "abcd";
    storeItem.m_name = input;

    string expectedResult = "abcd";
    string actualResult = storeItem.GetName();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult << "] TEST: string StoreItem::GetName()"
               << endl;
    testOutput << "* Setting storeItem.m_name to \"" << input << "\"." << endl;
    testOutput << "* Expecting storeItem.GetName() to return: \""
               << expectedResult << "\"" << endl;
    testOutput << "* Actual return of storeItem.GetName():    \""
               << actualResult << "\"" << endl;
    testOutput << endl;
  } // TEST END

  testOutput << endl << "TEST RESULTS:" << endl;
  testOutput << totalTestsRan << " total tests ran" << endl;
  testOutput << totalTestsPass << " tests passed" << endl;
  testOutput << totalTestsFail << " tests failed" << endl;

  cout << endl << "StoreItems TEST RESULTS:" << endl;
  cout << totalTestsRan << " total tests ran" << endl;
  cout << totalTestsPass << " tests passed" << endl;
  cout << totalTestsFail << " tests failed" << endl;
  cout << endl << "See \"" << testFilename << "\" for more details." << endl;
}

void Tester::Test_Books() {
  string testFilename = "test_result-Books.txt";
  ofstream testOutput(testFilename);
  cout << "Test results will be output to \"" << testFilename << "\"" << endl;

  testOutput << endl
             << string(100, '-') << endl
             << "Test_Books" << endl
             << endl;
  int totalTestsRan = 0;
  int totalTestsPass = 0;
  int totalTestsFail = 0;

  { // TEST BEGIN - void Book::SetAuthor( string author )
    string testResult = "";
    totalTestsRan++;

    Book book;

    string input = "Bob McBobert";
    book.SetAuthor(input);

    string expectedResult = "Bob McBobert";
    string actualResult = book.m_author;

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: void Book::SetAuthor( string author )" << endl;
    testOutput << "* Calling book.SetName( \"" << input << "\" );" << endl;
    testOutput << "* Expecting book.m_name to be: \"" << expectedResult << "\""
               << endl;
    testOutput << "* Actual value of book.m_name: \"" << actualResult << "\""
               << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - string StoreItem::GetName()
    string testResult = "";
    totalTestsRan++;

    Book book;

    string input = "Bob McBobert";
    book.m_author = input;

    string expectedResult = "Bob McBobert";
    string actualResult = book.GetAuthor();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult << "] TEST: string Book::GetAuthor()"
               << endl;
    testOutput << "* Setting book.m_author to \"" << input << "\"." << endl;
    testOutput << "* Expecting book.GetAuthor() to return: \"" << expectedResult
               << "\"" << endl;
    testOutput << "* Actual return of book.GetAuthor():    \"" << actualResult
               << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - void Book::SetAuthor( string author )
    string testResult = "";
    totalTestsRan++;

    Book book;

    string input = "Bob McBobert";
    book.SetAuthor(input);

    string expectedResult = "Bob McBobert";
    string actualResult = book.m_author;

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: void Book::SetAuthor( string author )" << endl;
    testOutput << "* Calling book.SetName( \"" << input << "\" );" << endl;
    testOutput << "* Expecting book.m_author to be: \"" << expectedResult
               << "\"" << endl;
    testOutput << "* Actual value of book.m_author: \"" << actualResult << "\""
               << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - string StoreItem::GetAuthor()
    string testResult = "";
    totalTestsRan++;

    Book book;

    string input = "Bob McBobert";
    book.m_author = input;

    string expectedResult = "Bob McBobert";
    string actualResult = book.GetAuthor();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult << "] TEST: string Book::GetAuthor()"
               << endl;
    testOutput << "* Setting book.m_author to \"" << input << "\"." << endl;
    testOutput << "* Expecting book.GetAuthor() to return: \"" << expectedResult
               << "\"" << endl;
    testOutput << "* Actual return of book.GetAuthor():    \"" << actualResult
               << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - void Book::SetIsbn13( string isbn13 )
    string testResult = "";
    totalTestsRan++;

    Book book;

    string input = "978-0135957059";
    book.SetIsbn13(input);

    string expectedResult = "978-0135957059";
    string actualResult = book.m_isbn13;

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: void Book::SetIsbn13( string isbn13 )" << endl;
    testOutput << "* Calling book.SetName( \"" << input << "\" );" << endl;
    testOutput << "* Expecting book.m_isbn13 to be: \"" << expectedResult
               << "\"" << endl;
    testOutput << "* Actual value of book.m_isbn13: \"" << actualResult << "\""
               << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - string StoreItem::GetIsbn13()
    string testResult = "";
    totalTestsRan++;

    Book book;

    string input = "978-0135957059";
    book.m_isbn13 = input;

    string expectedResult = "978-0135957059";
    string actualResult = book.GetIsbn13();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult << "] TEST: string Book::GetAuthor()"
               << endl;
    testOutput << "* Setting book.m_isbn13 to \"" << input << "\"." << endl;
    testOutput << "* Expecting book.GetIsbn13() to return: \"" << expectedResult
               << "\"" << endl;
    testOutput << "* Actual return of book.GetIsbn13():    \"" << actualResult
               << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - void Book::SetCoverType( int coverType )
    string testResult = "";
    totalTestsRan++;

    Book book;

    int input = 2;
    book.SetCoverType(input);

    int expectedResult = 2;
    int actualResult = book.m_coverType;

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: void Book::SetCoverType( int coverType )" << endl;
    testOutput << "* Calling book.SetCoverType( \"" << input << "\" );" << endl;
    testOutput << "* Expecting book.m_coverType to be: \"" << expectedResult
               << "\"" << endl;
    testOutput << "* Actual value of book.m_coverType: \"" << actualResult
               << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - int StoreItem::GetCoverType()
    string testResult = "";
    totalTestsRan++;

    Book book;

    int input = 1;
    book.m_coverType = input;

    int expectedResult = 1;
    int actualResult = book.GetCoverType();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult << "] TEST: int Book::GetCoverType()"
               << endl;
    testOutput << "* Setting book.m_coverType to \"" << input << "\"." << endl;
    testOutput << "* Expecting book.GetCoverType() to return: \""
               << expectedResult << "\"" << endl;
    testOutput << "* Actual return of book.GetCoverType():    \""
               << actualResult << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - string StoreItem::GetCoverTypeString()
    string testResult = "";
    totalTestsRan++;

    Book book;

    int input = 1;
    book.m_coverType = input;

    string expectedResult = "Hardcover";
    string actualResult = book.GetCoverTypeString();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: string Book::GetCoverTypeString()" << endl;
    testOutput << "* Setting book.m_coverType to \"" << input << "\"." << endl;
    testOutput << "* Expecting book.GetCoverTypeString() to return: \""
               << expectedResult << "\"" << endl;
    testOutput << "* Actual return of book.GetCoverTypeString():    \""
               << actualResult << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - string StoreItem::GetCoverTypeString()
    string testResult = "";
    totalTestsRan++;

    Book book;

    int input = 2;
    book.m_coverType = input;

    string expectedResult = "Paperback";
    string actualResult = book.GetCoverTypeString();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: string Book::GetCoverTypeString()" << endl;
    testOutput << "* Setting book.m_coverType to \"" << input << "\"." << endl;
    testOutput << "* Expecting book.GetCoverTypeString() to return: \""
               << expectedResult << "\"" << endl;
    testOutput << "* Actual return of book.GetCoverTypeString():    \""
               << actualResult << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - string StoreItem::GetCoverTypeString()
    string testResult = "";
    totalTestsRan++;

    Book book;

    int input = 5;
    book.m_coverType = input;

    string expectedResult = "Unknown";
    string actualResult = book.GetCoverTypeString();

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: string Book::GetCoverTypeString()" << endl;
    testOutput << "* Setting book.m_coverType to \"" << input << "\"." << endl;
    testOutput << "* Expecting book.GetCoverTypeString() to return: \""
               << expectedResult << "\"" << endl;
    testOutput << "* Actual return of book.GetCoverTypeString():    \""
               << actualResult << "\"" << endl;
    testOutput << endl;
  } // TEST END

  testOutput << endl << "TEST RESULTS:" << endl;
  testOutput << totalTestsRan << " total tests ran" << endl;
  testOutput << totalTestsPass << " tests passed" << endl;
  testOutput << totalTestsFail << " tests failed" << endl;

  cout << endl << "Book TEST RESULTS:" << endl;
  cout << totalTestsRan << " total tests ran" << endl;
  cout << totalTestsPass << " tests passed" << endl;
  cout << totalTestsFail << " tests failed" << endl;
  cout << endl << "See \"" << testFilename << "\" for more details." << endl;
}

void Tester::Test_Utilities() {
  string testFilename = "test_result-Utilities.txt";
  ofstream testOutput(testFilename);
  cout << "Test results will be output to \"" << testFilename << "\"" << endl;

  testOutput << endl
             << string(100, '-') << endl
             << "Test_Utilities" << endl
             << endl;
  int totalTestsRan = 0;
  int totalTestsPass = 0;
  int totalTestsFail = 0;

  { // TEST BEGIN - float CalculatePricePlusTax( float price, float taxPercent )
    string testResult = "";
    totalTestsRan++;

    Book book;

    float input_price = 5;
    float input_taxPercent = 25;

    float expectedResult = 6.25;
    float actualResult = CalculatePricePlusTax(input_price, input_taxPercent);

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: float CalculatePricePlusTax( float price, float "
                  "taxPercent )"
               << endl;
    testOutput << "* Setting price input to \"" << input_price << "\"." << endl;
    testOutput << "* Setting taxPercent input to \"" << input_taxPercent
               << "\"." << endl;
    testOutput << "* Expecting CalculatePricePlusTax() to return: \""
               << expectedResult << "\"" << endl;
    testOutput << "* Actual return of CalculatePricePlusTax():    \""
               << actualResult << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - bool IsValidInput( int choice, int min, int max )
    string testResult = "";
    totalTestsRan++;

    Book book;

    int input_choice = 5;
    int input_min = 1;
    int input_max = 10;

    bool expectedResult = true;
    bool actualResult = IsValidInput(input_choice, input_min, input_max);

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: bool IsValidInput( int choice, int min, int max )"
               << endl;
    testOutput << "* Setting choice input to \"" << input_choice << "\"."
               << endl;
    testOutput << "* Setting min input to \"" << input_min << "\"." << endl;
    testOutput << "* Setting max input to \"" << input_max << "\"." << endl;
    testOutput << "* (note, 0 = false, 1 = true)" << endl;
    testOutput << "* Expecting IsValidInput() to return: \"" << expectedResult
               << "\"" << endl;
    testOutput << "* Actual return of IsValidInput():    \"" << actualResult
               << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - bool IsValidInput( int choice, int min, int max )
    string testResult = "";
    totalTestsRan++;

    Book book;

    int input_choice = 5;
    int input_min = 10;
    int input_max = 15;

    bool expectedResult = false;
    bool actualResult = IsValidInput(input_choice, input_min, input_max);

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: bool IsValidInput( int choice, int min, int max )"
               << endl;
    testOutput << "* Setting choice input to \"" << input_choice << "\"."
               << endl;
    testOutput << "* Setting min input to \"" << input_min << "\"." << endl;
    testOutput << "* Setting max input to \"" << input_max << "\"." << endl;
    testOutput << "* (note, 0 = false, 1 = true)" << endl;
    testOutput << "* Expecting IsValidInput() to return: \"" << expectedResult
               << "\"" << endl;
    testOutput << "* Actual return of IsValidInput():    \"" << actualResult
               << "\"" << endl;
    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - bool IsValidInput( int choice, int min, int max )
    string testResult = "";
    totalTestsRan++;

    Book book;

    int input_choice = 4;
    int input_min = 1;
    int input_max = 3;

    bool expectedResult = false;
    bool actualResult = IsValidInput(input_choice, input_min, input_max);

    if (actualResult == expectedResult) {
      testResult = "pass";
      totalTestsPass++;
    } else {
      testResult = "FAIL";
      totalTestsFail++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: bool IsValidInput( int choice, int min, int max )"
               << endl;
    testOutput << "* Setting choice input to \"" << input_choice << "\"."
               << endl;
    testOutput << "* Setting min input to \"" << input_min << "\"." << endl;
    testOutput << "* Setting max input to \"" << input_max << "\"." << endl;
    testOutput << "* (note, 0 = false, 1 = true)" << endl;
    testOutput << "* Expecting IsValidInput() to return: \"" << expectedResult
               << "\"" << endl;
    testOutput << "* Actual return of IsValidInput():    \"" << actualResult
               << "\"" << endl;
    testOutput << endl;
  } // TEST END

  testOutput << endl << "TEST RESULTS:" << endl;
  testOutput << totalTestsRan << " total tests ran" << endl;
  testOutput << totalTestsPass << " tests passed" << endl;
  testOutput << totalTestsFail << " tests failed" << endl;

  cout << endl << "Utilities TEST RESULTS:" << endl;
  cout << totalTestsRan << " total tests ran" << endl;
  cout << totalTestsPass << " tests passed" << endl;
  cout << totalTestsFail << " tests failed" << endl;
  cout << endl << "See \"" << testFilename << "\" for more details." << endl;
}

void Tester::Test_Program() {
  string testFilename = "test_result-Program.txt";
  ofstream testOutput(testFilename);
  cout << "Test results will be output to \"" << testFilename << "\"" << endl;

  testOutput << endl
             << string(100, '-') << endl
             << "Test_Program" << endl
             << endl;
  int totalTestsRan = 0;
  int totalTestsPass = 0;
  int totalTestsFail = 0;

  { // TEST BEGIN - void Program::AddItemToCart( StoreItem storeItem )
    string testResult = "";
    totalTestsRan++;

    Program program("Test");
    StoreItem input;
    input.m_name = "TestName";
    input.m_price = 4.56;
    input.m_productType = "TestType";

    // Add item to cart:
    program.AddItemToCart(input);

    // Expecting it to now be part of the m_shoppingCart vector
    string failData = "Success";
    if (program.m_shoppingCart.size() != 1) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Shopping cart size should be 1!";
    } else if (program.m_shoppingCart[0].m_name != input.m_name) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Cart item 0's name doesn't match!";
    } else if (program.m_shoppingCart[0].m_price != input.m_price) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Cart item 0's price doesn't match!";
    } else if (program.m_shoppingCart[0].m_productType != input.m_productType) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Cart item 0's product type doesn't match!";
    } else {
      testResult = "pass";
      totalTestsPass++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: void AddItemToCart( StoreItem storeItem )" << endl;
    testOutput << "* Created StoreItem with info:" << endl;
    testOutput << "  * m_name = \"" << input.m_name << "\"." << endl;
    testOutput << "  * m_productType = \"" << input.m_productType << "\"."
               << endl;
    testOutput << "  * m_price = \"" << input.m_price << "\"." << endl;
    testOutput << "* Called program.AddItemToCart with the StoreItem" << endl;
    if (program.m_shoppingCart.size() == 1) {
      testOutput << "* Returned StoreItem: " << endl;
      testOutput << "  * m_name = \"" << program.m_shoppingCart[0].m_name
                 << "\"." << endl;
      testOutput << "  * m_productType = \""
                 << program.m_shoppingCart[0].m_productType << "\"." << endl;
      testOutput << "  * m_price = \"" << program.m_shoppingCart[0].m_price
                 << "\"." << endl;
    }
    testOutput << "* Additional data: " << failData << endl;

    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - void Program::LoadGenericItems( string filename )
    string testResult = "";
    totalTestsRan++;

    // Make test file
    string testDataFile = "data-generic-test.txt";
    ofstream output(testDataFile);
    output << 2 << endl;
    output << "TEST 0 TITLE" << endl;
    output << "TEST 0 TYPE" << endl;
    output << "2.22" << endl;
    output << "---" << endl;
    output << "TEST 1 TITLE" << endl;
    output << "TEST 1 TYPE" << endl;
    output << "5.55" << endl;

    Program program("Test");

    // Try to load the data:
    program.LoadGenericItems(testDataFile);

    // Expecting it to now be part of the m_shoppingCart vector
    string failData = "Success";
    if (program.m_genericItems == nullptr) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n program.m_genericItems pointer still points to nullptr!";
    } else if (program.m_genericItemsSize != 2) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n program.m_genericItemsSize should be 2!";
    } else if (program.m_genericItems[0].m_name != "TEST 0 TITLE") {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 0's title doesn't match! Should be TEST 0 TITLE";
    } else if (!(program.m_genericItems[0].m_price >= 2.22 &&
                 program.m_genericItems[0].m_price <= 2.23)) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 0's price doesn't match! Should be 2.22";
    } else if (program.m_genericItems[0].m_productType != "TEST 0 TYPE") {
      testResult = "FAIL";
      totalTestsFail++;
      failData =
          "\n Item 0's product type doesn't match! Should be TEST 0 TYPE";
    } else if (program.m_genericItems[1].m_name != "TEST 1 TITLE") {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 1's title doesn't match! Should be TEST 1 TITLE";
    } else if (!(program.m_genericItems[1].m_price >= 5.55 &&
                 program.m_genericItems[1].m_price <= 5.56)) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 1's price doesn't match! Should be 5.55.";
    } else if (program.m_genericItems[1].m_productType != "TEST 1 TYPE") {
      testResult = "FAIL";
      totalTestsFail++;
      failData =
          "\n Item 1's product type doesn't match! Should be TEST 1 TYPE";
    } else {
      testResult = "pass";
      totalTestsPass++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: void LoadGenericItems( string filename )" << endl;
    testOutput << "* Created test data file \"" << testDataFile << "\"" << endl;
    testOutput << "* Called program.LoadGenericItems. Expecting 2 items to be "
                  "loaded..."
               << endl;
    testOutput << "* program.m_genericItems = \"" << program.m_genericItems
               << "\" (should NOT be 0 or 0x000..., which is nullptr)" << endl;
    testOutput << "* program.m_genericItemsSize = \""
               << program.m_genericItemsSize << "\" (should be 2)" << endl;
    if (program.m_genericItems != nullptr && program.m_genericItemsSize == 2) {
      testOutput << "* StoreItem 0:" << endl;
      testOutput << "  * m_name = \"" << program.m_genericItems[0].m_name
                 << "\"." << endl;
      testOutput << "  * m_productType = \""
                 << program.m_genericItems[0].m_productType << "\"." << endl;
      testOutput << "  * m_price = \"" << program.m_genericItems[0].m_price
                 << "\"." << endl;

      testOutput << "* StoreItem 1:" << endl;
      testOutput << "  * m_name = \"" << program.m_genericItems[1].m_name
                 << "\"." << endl;
      testOutput << "  * m_productType = \""
                 << program.m_genericItems[1].m_productType << "\"." << endl;
      testOutput << "  * m_price = \"" << program.m_genericItems[1].m_price
                 << "\"." << endl;
    }
    testOutput << "* Additional data: " << failData << endl;

    testOutput << endl;
  } // TEST END

  { // TEST BEGIN - void Program::LoadBookItems( string filename )
    string testResult = "";
    totalTestsRan++;

    // Make test file
    string testDataFile = "data-book-test.txt";
    ofstream output(testDataFile);
    output << 2 << endl;
    output << "TEST 0 TITLE" << endl;
    output << "TEST 0 TYPE" << endl;
    output << "TEST 0 AUTHOR" << endl;
    output << "TEST 0 ISBN" << endl;
    output << "1" << endl;
    output << "2.22" << endl;
    output << "---" << endl;
    output << "TEST 1 TITLE" << endl;
    output << "TEST 1 TYPE" << endl;
    output << "TEST 1 AUTHOR" << endl;
    output << "TEST 1 ISBN" << endl;
    output << "2" << endl;
    output << "5.55" << endl;

    Program program("Test");

    // Try to load the data:
    program.LoadBookItems(testDataFile);

    // Expecting it to now be part of the m_shoppingCart vector
    string failData = "Success";
    if (program.m_bookItems == nullptr) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n program.m_bookItems pointer still points to nullptr!";
    } else if (program.m_bookItemsSize != 2) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n program.m_bookItemsSize should be 2!";
    } else if (program.m_bookItems[0].m_name != "TEST 0 TITLE") {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 0's title doesn't match! Should be TEST 0 TITLE";
    } else if (!(program.m_bookItems[0].m_price >= 2.22 &&
                 program.m_bookItems[0].m_price <= 2.23)) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 0's price doesn't match! Should be 2.22";
    } else if (program.m_bookItems[0].m_productType != "TEST 0 TYPE") {
      testResult = "FAIL";
      totalTestsFail++;
      failData =
          "\n Item 0's product type doesn't match! Should be TEST 0 TYPE";
    } else if (program.m_bookItems[0].m_author != "TEST 0 AUTHOR") {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 0's author doesn't match! Should be TEST 0 AUTHOR";
    } else if (program.m_bookItems[0].m_isbn13 != "TEST 0 ISBN") {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 0's isbn doesn't match! Should be TEST 0 ISBN";
    } else if (program.m_bookItems[0].m_coverType != 1) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 0's cover type doesn't match! Should be 1";
    } else if (program.m_bookItems[1].m_name != "TEST 1 TITLE") {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 1's title doesn't match! Should be TEST 1 TITLE";
    } else if (!(program.m_bookItems[1].m_price >= 5.55 &&
                 program.m_bookItems[1].m_price <= 5.56)) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 1's price doesn't match! Should be 5.55.";
    } else if (program.m_bookItems[1].m_productType != "TEST 1 TYPE") {
      testResult = "FAIL";
      totalTestsFail++;
      failData =
          "\n Item 1's product type doesn't match! Should be TEST 1 TYPE";
    } else if (program.m_bookItems[1].m_author != "TEST 1 AUTHOR") {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 0's author doesn't match! Should be TEST 1 AUTHOR";
    } else if (program.m_bookItems[1].m_isbn13 != "TEST 1 ISBN") {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 0's isbn doesn't match! Should be TEST 1 ISBN";
    } else if (program.m_bookItems[1].m_coverType != 2) {
      testResult = "FAIL";
      totalTestsFail++;
      failData = "\n Item 0's cover type doesn't match! Should be 2";
    } else {
      testResult = "pass";
      totalTestsPass++;
    }

    testOutput << string(80, '*') << endl;
    testOutput << "[" << testResult
               << "] TEST: void LoadBookItems( string filename )" << endl;
    testOutput << "* Created test data file \"" << testDataFile << "\"" << endl;
    testOutput
        << "* Called program.LoadBookItems. Expecting 2 items to be loaded..."
        << endl;
    testOutput << "* program.m_bookItems = \"" << program.m_bookItems
               << "\" (should NOT be 0 or 0x000..., which is nullptr)" << endl;
    testOutput << "* program.m_bookItemsSize = \"" << program.m_bookItemsSize
               << "\" (should be 2)" << endl;
    if (program.m_bookItems != nullptr && program.m_bookItemsSize == 2) {
      testOutput << "* Book 0:" << endl;
      testOutput << "  * m_name = \"" << program.m_bookItems[0].m_name << "\"."
                 << endl;
      testOutput << "  * m_productType = \""
                 << program.m_bookItems[0].m_productType << "\"." << endl;
      testOutput << "  * m_price = \"" << program.m_bookItems[0].m_price
                 << "\"." << endl;
      testOutput << "  * m_author = \"" << program.m_bookItems[0].m_author
                 << "\"." << endl;
      testOutput << "  * m_isbn13 = \"" << program.m_bookItems[0].m_isbn13
                 << "\"." << endl;
      testOutput << "  * m_coverType = \"" << program.m_bookItems[0].m_coverType
                 << "\"." << endl;

      testOutput << "* Book 1:" << endl;
      testOutput << "  * m_name = \"" << program.m_bookItems[1].m_name << "\"."
                 << endl;
      testOutput << "  * m_productType = \""
                 << program.m_bookItems[1].m_productType << "\"." << endl;
      testOutput << "  * m_price = \"" << program.m_bookItems[1].m_price
                 << "\"." << endl;
      testOutput << "  * m_author = \"" << program.m_bookItems[1].m_author
                 << "\"." << endl;
      testOutput << "  * m_isbn13 = \"" << program.m_bookItems[1].m_isbn13
                 << "\"." << endl;
      testOutput << "  * m_coverType = \"" << program.m_bookItems[1].m_coverType
                 << "\"." << endl;
    }
    testOutput << "* Additional data: " << failData << endl;

    testOutput << endl;
  } // TEST END

  testOutput << endl << "TEST RESULTS:" << endl;
  testOutput << totalTestsRan << " total tests ran" << endl;
  testOutput << totalTestsPass << " tests passed" << endl;
  testOutput << totalTestsFail << " tests failed" << endl;

  cout << endl << "Program TEST RESULTS:" << endl;
  cout << totalTestsRan << " total tests ran" << endl;
  cout << totalTestsPass << " tests passed" << endl;
  cout << totalTestsFail << " tests failed" << endl;
  cout << endl << "See \"" << testFilename << "\" for more details." << endl;
}
