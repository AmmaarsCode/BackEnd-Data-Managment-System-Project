#include "Program.h"
#include "Utilities.h"

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

// ----------------------------------------------------------------------------------------
// CONSTRUCTOR
Program::Program(string storeName) // DONE
{
  m_storeName = storeName;
  m_taxRatePercent = 9.1;
  m_genericItems = nullptr;
  m_bookItems = nullptr;
  m_genericItemsSize = 0;
  m_bookItemsSize = 0;

  cout << left << fixed << setprecision(2);

  // Load initial data files
  LoadGenericItems("data-generic-1.txt");
  LoadBookItems("data-book-1.txt");
}

// ----------------------------------------------------------------------------------------
// DESTRUCTOR
Program::~Program() // DONE
{
  if (m_genericItems != nullptr) {
    delete[] m_genericItems;
  }

  if (m_bookItems != nullptr) {
    delete[] m_bookItems;
  }
}

// ----------------------------------------------------------------------------------------
// RUN
void Program::Run() // DONE
{
  bool doneWithMenu = false;
  while (!doneWithMenu) {
    DisplayHeader("LOG IN");
    DisplayMenu({"EXIT", "Admin login", "Customer login"});

    int choice = GetIntegerInput(0, 2);

    switch (choice) {
    case 0:
      doneWithMenu = true;
      break;

    case 1:
      Menu_Admin_MainMenu();
      break;

    case 2:
      Menu_Customer_MainMenu();
      break;
    }
  }
}

// ----------------------------------------------------------------------------------------
// MENU - ADMIN - MAIN MENU
void Program::Menu_Admin_MainMenu() // DONE
{
  bool doneWithMenu = false;
  while (!doneWithMenu) {
    DisplayHeader("ADMIN MAIN MENU");
    vector<string> options = {"LOG OUT",
                              "View all items",
                              "View generic item by ID",
                              "View book item by ID",
                              "Create new product list",
                              "Modify existing item",
                              "Load product file",
                              "Save product file"};
    DisplayMenu(options);

    int choice = GetIntegerInput(0, options.size() - 1);

    switch (choice) {
    case 0:
      doneWithMenu = true;
      break;

    case 1:
      Menu_ViewAllItems();
      break;

    case 2:
      Menu_ViewGenericItem();
      break;

    case 3:
      Menu_ViewBookItem();
      break;

    case 4:
      Menu_Admin_CreateNewList();
      break;

    case 5:
      Menu_Admin_ModifyItem();
      break;

    case 6:
      Menu_Admin_LoadFile();
      break;

    case 7:
      Menu_Admin_SaveFile();
      break;
    }
  }
}

// ----------------------------------------------------------------------------------------
// MENU - ADMIN - CREATE NEW LIST
void Program::Menu_Admin_CreateNewList() // DONE
{
  DisplayHeader("CREATE NEW LIST");
  vector<string> options = {"BACK", "Generic items", "Books"};
  DisplayMenu(options);
  int choice = GetIntegerInput(0, options.size() - 1);

  if (choice == 0) {
    return;
  }

  int newSize;
  cout << endl << "How big do you want the list to be? ";
  cin >> newSize;

  while (newSize <= 0) {
    cout << "List size must be a positive integer!" << endl;
    cout << endl << "How big do you want the list to be? ";
    cin >> newSize;
  }

  if (choice == 1) {
    if (m_genericItems != nullptr) {
      delete[] m_genericItems;
    }

    m_genericItemsSize = newSize;
    m_genericItems = new StoreItem[m_genericItemsSize];

    cout << endl << "New list created." << endl;
  } else if (choice == 2) {
    if (m_bookItems != nullptr) {
      delete[] m_bookItems;
    }

    m_bookItemsSize = newSize;
    m_bookItems = new Book[m_bookItemsSize];

    cout << endl << "New list created." << endl;
  }

  PressEnterToContinue();
}

// ----------------------------------------------------------------------------------------
// MENU - VIEW ALL ITEMS
void Program::Menu_ViewAllItems() // DONE
{
  DisplayHeader("VIEW ALL ITEMS");

  cout << "Generic items:" << endl;
  DisplayGenericItems();

  cout << endl << endl;

  cout << "Book items: " << endl;
  DisplayBookItems();

  PressEnterToContinue();
}

// ----------------------------------------------------------------------------------------
// MENU - VIEW GENERIC ITEM
void Program::Menu_ViewGenericItem() // DONE
{
  DisplayHeader("VIEW GENERIC ITEM");

  cout << endl << "Enter index of generic item to view." << endl;
  int index = GetIntegerInput(0, m_genericItemsSize - 1);

  cout << endl << "RESULT" << endl;
  cout << "NAME:  " << m_genericItems[index].GetName() << endl;
  cout << "PRICE: $" << m_genericItems[index].GetPrice() << endl;
  cout << "TYPE:  " << m_genericItems[index].GetProductType() << endl;

  PressEnterToContinue();
}

// ----------------------------------------------------------------------------------------
// MENU - VIEW BOOK
/**
1. Ask the user which book to view. (done)
2. Get the user's selection and store it in an integer `index`. (done)
3. Use cout statements to display all the data for the book:
    * Name
    * Price
    * ProductType
    * Author
    * ISBN
    * CoverType (as a string)

Use the `m_bookItems[index]` 's Getter functions to access this data.
*/
void Program::Menu_ViewBookItem() // TO UPDATE
{
  DisplayHeader("VIEW BOOK");

  cout << endl << "Enter index of book item to view." << endl;
  int index = GetIntegerInput(0, m_bookItemsSize - 1);

  // TODO: Display this book's information
  cout << endl << "RESULT" << endl;
  cout << "NAME:  " << m_bookItems[index].GetName() << endl;
  cout << "PRICE: $" << m_bookItems[index].GetPrice() << endl;
  cout << "TYPE:  " << m_bookItems[index].GetProductType() << endl;
  cout << "AUTHOR:  " << m_bookItems[index].GetAuthor() << endl;
  cout << "COVER:  " << m_bookItems[index].GetCoverType() << endl;
  cout << "ISBN:  " << m_bookItems[index].GetIsbn13() << endl;

  PressEnterToContinue();
}

// ----------------------------------------------------------------------------------------
// MENU - ADMIN - MODIFY ITEM
void Program::Menu_Admin_ModifyItem() // DONE
{
  DisplayHeader("MODIFY ITEM");
  vector<string> options = {"BACK", "Generic items", "Books"};
  DisplayMenu(options);
  int choice = GetIntegerInput(0, options.size() - 1);

  if (choice == 0) {
    return; // Exit this menu early
  } else if (choice == 1) {
    DisplayGenericItems();

    cout << endl << "Enter ID of item to edit." << endl;
    int index = GetIntegerInput(0, m_genericItemsSize - 1);
    EditGenericItem(index);
  } else if (choice == 2) {
    DisplayBookItems();

    cout << endl << "Enter ID of item to edit." << endl;
    int index = GetIntegerInput(0, m_bookItemsSize - 1);
    EditBookItem(index);
  }
}

// ----------------------------------------------------------------------------------------
// EDIT GENERIC ITEM
void Program::EditGenericItem(int index) // DONE
{
  cout << endl << "EDITING ITEM #" << index << ": " << endl;
  cout << "NAME:  " << m_genericItems[index].GetName() << endl;
  cout << "PRICE: $" << m_genericItems[index].GetPrice() << endl;
  cout << "TYPE:  " << m_genericItems[index].GetProductType() << endl;

  cout << endl << "Update which field?" << endl;
  vector<string> suboptions = {"CANCEL", "Name", "Price", "Product type"};
  DisplayMenu(suboptions);
  int choice = GetIntegerInput(0, suboptions.size() - 1);

  if (choice == 0) {
    return; // Exit this menu early
  } else if (choice == 1) {
    cout << endl << "Enter new name: ";
    cin.ignore();
    string newName;
    getline(cin, newName);
    m_genericItems[index].SetName(newName);
    cout << endl << "Updated." << endl;

    PressEnterToContinue(false);
  } else if (choice == 2) {
    cout << endl << "Enter new price: ";
    float newPrice;
    cin >> newPrice;
    m_genericItems[index].SetPrice(newPrice);
    cout << endl << "Updated." << endl;

    PressEnterToContinue();
  } else if (choice == 3) {
    cout << endl << "Enter new product type: ";
    cin.ignore();
    string newType;
    getline(cin, newType);
    m_genericItems[index].SetProductType(newType);
    cout << endl << "Updated." << endl;

    PressEnterToContinue(false);
  }
}

// ----------------------------------------------------------------------------------------
// EDIT BOOK ITEM
/**
EditBookItem
@param  index       The index of the element of `m_bookItems` to update.

1. Display the book's current information (done)
2. Ask the user which field they want to update as a menu (done)
3. Check what field they want to update:
    * 1 = update name
    * 2 = update price
    * 3 = Update product type
    * 4 = Update author
    * 5 = Update isbn
    * 6 = Update cover type

To update the name, make sure to call `cin.ignore();`, then ask the user
for a new name. Create a temporary string such as `newName`, use getline
to get the new name, then use the `m_bookItems[index]` 's SetName function
to pass the new name to the Book.

For any strings that contain spaces, such as name, author, and product type,
make sure to use `cin.ignore();` first and use getline to get this data.

For strings without spaces and non-string-data, use `cin >>` to store the data.
No `cin.ignore();` is needed for these.

WHEN DONE UPDATING A FIELD, DISPLAY A MESSAGE TO THE USER LIKE
"Name Updated"

AND CALL THE FOLLOWING FUNCTION TO WAIT FOR THE USER TO HIT ENTER:
`PressEnterToContinue( false );`
*/
void Program::EditBookItem(int index) // TO UPDATE
{
  cout << endl << "EDITING ITEM #" << index << ": " << endl;
  cout << "NAME:        " << m_bookItems[index].GetName() << endl;
  cout << "PRICE:       $" << m_bookItems[index].GetPrice() << endl;
  cout << "TYPE:        " << m_bookItems[index].GetProductType() << endl;
  cout << "AUTHOR:      " << m_bookItems[index].GetAuthor() << endl;
  cout << "ISBN:        " << m_bookItems[index].GetIsbn13() << endl;
  cout << "COVER TYPE:  " << m_bookItems[index].GetCoverTypeString() << endl;

  cout << endl << "Update which field?" << endl;
  vector<string> suboptions = {"CANCEL", "Name", "Price",     "Product type",
                               "Author", "ISBN", "Cover type"};
  DisplayMenu(suboptions);
  int choice = GetIntegerInput(0, suboptions.size() - 1);

  if (choice == 0) {
    return; // Exit this menu early
  } else if (choice == 1) {
    cout << endl << "Enter new name: ";
    cin.ignore();
    string newName;
    getline(cin, newName);
    m_bookItems[index].SetName(newName);
    cout << endl << "Updated." << endl;

    PressEnterToContinue(false);
  } else if (choice == 2) {
    cout << endl << "Enter new price: ";
    float newPrice;
    cin >> newPrice;
    m_bookItems[index].SetPrice(newPrice);
    cout << endl << "Updated." << endl;

    PressEnterToContinue();
  } else if (choice == 3) {
    cout << endl << "Enter new product type: ";
    cin.ignore();
    string newType;
    getline(cin, newType);
    m_bookItems[index].SetProductType(newType);
    cout << endl << "Updated." << endl;

    PressEnterToContinue();
  } else if (choice == 4) {
    cout << endl << "Enter new author: ";
    cin.ignore();
    string newAuthor;
    getline(cin, newAuthor);
    m_bookItems[index].SetAuthor(newAuthor);
    cout << endl << "Updated." << endl;

    PressEnterToContinue();
  } else if (choice == 5) {
    cout << endl << "Enter new ISBN: ";
    cin.ignore();
    string newIS;
    getline(cin, newIS);
    m_bookItems[index].SetIsbn13(newIS);
    cout << endl << "Updated." << endl;

    PressEnterToContinue();
  } else if (choice == 6) {
    cout << endl << "Enter new covertype: ";
    cin.ignore();
    int newCover;
    cin >> newCover;
    m_bookItems[index].SetCoverType(newCover);
    cout << endl << "Updated." << endl;

    PressEnterToContinue(false);
  }
  // TODO: Let user enter new info for a book based on their selection.
  // 1 = update Name
  // 2 = update Price
  // 3 = Update product type
  // 4 = Update author
  // 5 = Update isbn
  // 6 = Update cover type
}

// ----------------------------------------------------------------------------------------
// MENU - ADMIN - LOAD FILE
void Program::Menu_Admin_LoadFile() // DONE
{
  DisplayHeader("LOAD FILE");
  vector<string> options = {"BACK", "Generic items", "Books"};
  DisplayMenu(options);
  int choice = GetIntegerInput(0, options.size() - 1);

  if (choice == 0) {
    return;
  }

  cout << endl << "Enter filename of data to load: ";
  string filename;
  cin.ignore();
  getline(cin, filename);

  if (choice == 1) {
    LoadGenericItems(filename);
  } else if (choice == 2) {
    LoadBookItems(filename);
  }

  PressEnterToContinue();
}

// ----------------------------------------------------------------------------------------
// MENU - ADMIN - SAVE FILE
void Program::Menu_Admin_SaveFile() // DONE
{
  DisplayHeader("SAVE FILE");
  vector<string> options = {"BACK", "Generic items", "Books"};
  DisplayMenu(options);
  int choice = GetIntegerInput(0, options.size() - 1);

  if (choice == 0) {
    return;
  }

  cout << endl << "Enter filename of file to save data to: ";
  string filename;
  cin.ignore();
  getline(cin, filename);

  ofstream output(filename);

  if (choice == 1) {
    output << m_genericItemsSize << endl;

    for (unsigned int i = 0; i < m_genericItemsSize; i++) {
      output << m_genericItems[i].GetName() << endl;
      output << m_genericItems[i].GetProductType() << endl;
      output << m_genericItems[i].GetPrice() << endl;
      output << "---" << endl;
    }
  } else if (choice == 2) {
    output << m_bookItemsSize << endl;

    for (unsigned int i = 0; i < m_bookItemsSize; i++) {
      output << m_bookItems[i].GetName() << endl;
      output << m_bookItems[i].GetProductType() << endl;
      output << m_bookItems[i].GetAuthor() << endl;
      output << m_bookItems[i].GetIsbn13() << endl;
      output << m_bookItems[i].GetCoverType() << endl;
      output << m_bookItems[i].GetPrice() << endl;
      output << "---" << endl;
    }
  }

  cout << endl << "File saved." << endl;

  PressEnterToContinue(false);
}

// ----------------------------------------------------------------------------------------
// MENU - CUSTOMER - MAIN MENU
void Program::Menu_Customer_MainMenu() // DONE
{
  bool doneWithMenu = false;
  while (!doneWithMenu) {
    DisplayHeader("CUSTOMER MAIN MENU");
    vector<string> options = {"LOG OUT",
                              "View all items",
                              "View generic item by ID",
                              "View book item by ID",
                              "Add item to cart",
                              "View cart",
                              "Check out and print receipt"};
    DisplayMenu(options);

    int choice = GetIntegerInput(0, options.size() - 1);

    switch (choice) {
    case 0:
      doneWithMenu = true;
      break;

    case 1:
      Menu_ViewAllItems();
      break;

    case 2:
      Menu_ViewGenericItem();
      break;

    case 3:
      Menu_ViewBookItem();
      break;

    case 4:
      Menu_Customer_AddItemToCart();
      break;

    case 5:
      Menu_Customer_ViewCart();
      break;

    case 6:
      Menu_Customer_CheckOutPrintReceipt();
      break;
    }
  }
}

// ----------------------------------------------------------------------------------------
// MENU - CUSTOMER - ADD ITEM TO CART
void Program::Menu_Customer_AddItemToCart() // DONE
{
  DisplayHeader("ADD ITEM TO CART");
  DisplayMenu({"BACK", "Generic items", "Books"});

  int choice = GetIntegerInput(0, 2);

  if (choice == 0) {
    // Exit this menu early
    return;
  } else if (choice == 1) {
    DisplayGenericItems();

    cout << endl << "Enter item ID to add to cart." << endl;
    int index = GetIntegerInput(0, m_genericItemsSize - 1);

    AddItemToCart(m_genericItems[index]);
  } else if (choice == 2) {
    DisplayBookItems();

    cout << endl << "Enter item ID to add to cart." << endl;
    int index = GetIntegerInput(0, m_bookItemsSize - 1);

    AddItemToCart(m_bookItems[index]);
  }

  cout << endl << "Item added to cart." << endl;

  PressEnterToContinue();
}

// ----------------------------------------------------------------------------------------
// MENU - CUSTOMER - VIEW CART
void Program::Menu_Customer_ViewCart() // DONE
{
  DisplayHeader("VIEW CART");

  DisplayShoppingCart();

  PressEnterToContinue();
}

// ----------------------------------------------------------------------------------------
// MENU - CUSTOMER - CHECK OUT PRINT RECEIPT
void Program::Menu_Customer_CheckOutPrintReceipt() // DONE
{
  DisplayHeader("CHECK OUT & PRINT RECEIPT");

  string filename = "receipt-" + GetCurrentTimestamp() + ".txt";
  ofstream output(filename);

  float totalPrice = 0;

  output << "THANK YOU FOR SHOPPING AT " << m_storeName << endl << endl;

  for (unsigned int i = 0; i < m_shoppingCart.size(); i++) {
    output << m_shoppingCart[i].GetName() << " @ $"
           << m_shoppingCart[i].GetPrice() << endl;
    totalPrice += m_shoppingCart[i].GetPrice();
  }

  float afterTax = CalculatePricePlusTax(totalPrice, m_taxRatePercent);

  output << endl << "Subtotal: " << totalPrice << endl;
  output << "Tax: " << m_taxRatePercent << "%" << endl;
  output << "Total: " << afterTax << endl;

  cout << "Receipt written out to \"" << filename << "\"" << endl;

  PressEnterToContinue();
}

// ----------------------------------------------------------------------------------------
// HELPER - DISPLAY GENERIC ITEMS
void Program::DisplayGenericItems() // DONE
{
  // Table header
  cout << endl
       << left << setw(5) << "ID" << setw(10) << "PRICE" << setw(15) << "TYPE"
       << setw(50) << "NAME" << endl;
  cout << string(80, '-') << endl;

  for (unsigned int i = 0; i < m_genericItemsSize; i++) {
    cout << setw(5) << i << setw(10) << m_genericItems[i].GetPrice() << setw(15)
         << m_genericItems[i].GetProductType() << setw(50)
         << ShortenString(m_genericItems[i].GetName(), 50) << endl;
  }
}

// ----------------------------------------------------------------------------------------
// HELPER - DISPLAY BOOK ITEMS
void Program::DisplayBookItems() // DONE
{
  // Table header
  cout << endl
       << left << setw(5) << "ID" << setw(10) << "PRICE" << setw(15) << "COVER"
       << setw(20) << "ISBN" << setw(30) << "NAME" << endl;
  cout << string(80, '-') << endl;

  for (unsigned int i = 0; i < m_bookItemsSize; i++) {
    cout << setw(5) << i << setw(10) << m_bookItems[i].GetPrice() << setw(15)
         << m_bookItems[i].GetCoverTypeString() << setw(20)
         << m_bookItems[i].GetIsbn13() << setw(30)
         << ShortenString(m_bookItems[i].GetName(), 30) << endl;
  }
}

// ----------------------------------------------------------------------------------------
// HELPER - DISPLAY SHOPPING CART
void Program::DisplayShoppingCart() // DONE
{
  float totalPrice = 0;

  // Table header
  cout << endl
       << left << setw(5) << "ID" << setw(10) << "PRICE" << setw(15) << "TYPE"
       << setw(50) << "NAME" << endl;
  cout << string(80, '-') << endl;

  for (unsigned int i = 0; i < m_shoppingCart.size(); i++) {
    cout << setw(5) << i << setw(10) << m_genericItems[i].GetPrice() << setw(15)
         << m_genericItems[i].GetProductType() << setw(50)
         << ShortenString(m_genericItems[i].GetName(), 50) << endl;

    totalPrice += m_shoppingCart[i].GetPrice();
  }

  cout << endl << "Total price: " << totalPrice << endl;
}

// ----------------------------------------------------------------------------------------
// HELPER - ADD ITEM TO CART
void Program::AddItemToCart(StoreItem storeItem) // DONE
{
  // Just storing basic store item data
  m_shoppingCart.push_back(storeItem);
}

// ----------------------------------------------------------------------------------------
// LOAD GENERIC ITEMS
void Program::LoadGenericItems(string filename) // DONE
{
  ifstream input(filename);

  if (input.fail()) {
    cout << "ERROR: Could not find file \"" << filename << "\"!" << endl;
    return; // Leave function early
  }

  input >> m_genericItemsSize; // First line is the size

  // Clear existing data
  if (m_genericItems != nullptr) {
    delete[] m_genericItems;
  }

  m_genericItems = new StoreItem[m_genericItemsSize];

  string title;
  string type;
  float price;
  string buffer;

  for (unsigned int i = 0; i < m_genericItemsSize; i++) {
    input.ignore();
    getline(input, title);
    getline(input, type);
    input >> price;
    input >> buffer;

    m_genericItems[i].SetName(title);
    m_genericItems[i].SetProductType(type);
    m_genericItems[i].SetPrice(price);
  }

  cout << endl << m_genericItemsSize << " generic items loaded" << endl;
}

// ----------------------------------------------------------------------------------------
// LOAD BOOK ITEMS
/**
LoadBookItems
@param  filename        The name of the filename to load

1. Create an input file stream variable named `input`, open the `filename` text
file.
2. Check to see if `input` failed. If it failed, display an error message and
`return` early.
3. For the very first input, read in a value for `m_bookItemsSize`.
4. Check to see if `m_bookItems` is NOT equal to `nullptr`. If it is NOT
nullptr, then use `delete [] m_bookItems;`.
5. Initialize a new array of Book objects via the `m_bookItems` pointer, with
the size `m_bookItemsSize`.
6. Create temporary variables to load data:
    * string title;
    * string type;
    * string author;
    * string isbn;
    * int covertype;
    * float price;
    * string buffer;
7. Use a for loop, starting `i` at 0 to `m_bookItemsSize`, incrementing `i` by 1
each time. Within the loop do the following: 7a. Call `input.ignore();` 7b. Read
a line from input into title 7c. Read a line from input into type 7d. Read a
line from input into author 7e. Read a line from input into isbn 7f. Read
directly from input (`input >>`) into covertype 7g. Read directly from input
(`input >>`) into price 7h. Read directly from input (`input >>`) into buffer
    7i. Use the `SetName` function on `m_bookItems[i]` to assign its `name`.
    7i. Use the `SetProductType` function on `m_bookItems[i]` to assign its
`type`. 7i. Use the `SetPrice` function on `m_bookItems[i]` to assign its
`price`. 7i. Use the `SetAuthor` function on `m_bookItems[i]` to assign its
`author`. 7i. Use the `SetCoverType` function on `m_bookItems[i]` to assign its
`covertype`. 7i. Use the `SetIsbn13` function on `m_bookItems[i]` to assign its
`isbn`.
8. At the end, display how many books were loaded by using `cout` to display the
value of `m_bookItemsSize`.
*/
void Program::LoadBookItems(string filename) // TO UPDATE
{
  ifstream input(filename);

  if (input.fail()) {
    cout << "ERROR: Could not find file \"" << filename << "\"!" << endl;
    return; // Leave function early
  }

  input >> m_bookItemsSize; // First line is the size

  // Clear existing data
  if (m_bookItems != nullptr) {
    delete[] m_bookItems;
  }

  m_bookItems = new Book[m_bookItemsSize];

  string title;
  string type;
  string author;
  string isbn;
  int covertype;
  float price;
  string buffer;

  for (unsigned int i = 0; i < m_bookItemsSize; i++) {
    input.ignore();
    getline(input, title);
    getline(input, type);
    getline(input, author);
    getline(input, isbn);
    input >> covertype;
    input >> price;
    input >> buffer;

    m_bookItems[i].SetName(title);
    m_bookItems[i].SetProductType(type);
    m_bookItems[i].SetPrice(price);
    m_bookItems[i].SetAuthor(author);
    m_bookItems[i].SetCoverType(covertype);
    m_bookItems[i].SetIsbn13(isbn);
  }

  cout << endl << m_bookItemsSize << " book items loaded" << endl;
}
// TODO: Load book items from file.
// Use void Program::LoadGenericItems( string filename ) for reference
