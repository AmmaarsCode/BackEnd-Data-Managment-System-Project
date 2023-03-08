// You don't need to update this file.

#ifndef _PROGRAM
#define _PROGRAM

#include <array>
#include <vector>
using namespace std;

#include "StoreItem.h"

//! This class contains all the menus the user can navigate
class Program {
public:
  Program(string name); // DONE
  ~Program();           // DONE

  void Run(); // DONE

  void Menu_ViewAllItems();    // DONE
  void Menu_ViewGenericItem(); // DONE
  void Menu_ViewBookItem();    // TO UPDATE

  void Menu_Admin_MainMenu();      // DONE
  void Menu_Admin_CreateNewList(); // DONE
  void Menu_Admin_ModifyItem();    // DONE
  void Menu_Admin_LoadFile();      // DONE
  void Menu_Admin_SaveFile();      // DONE

  void Menu_Customer_MainMenu();             // DONE
  void Menu_Customer_AddItemToCart();        // DONE
  void Menu_Customer_ViewCart();             // DONE
  void Menu_Customer_CheckOutPrintReceipt(); // DONE

private:
  string m_storeName;
  float m_taxRatePercent;

  StoreItem *m_genericItems;
  unsigned int m_genericItemsSize;
  Book *m_bookItems;
  unsigned int m_bookItemsSize;
  vector<StoreItem> m_shoppingCart;

  void DisplayGenericItems(); // DONE
  void DisplayBookItems();    // DONE
  void DisplayShoppingCart(); // DONE

  void AddItemToCart(StoreItem storeItem); // DONE
  void LoadGenericItems(string filename);  // DONE
  void LoadBookItems(string filename);     // TO UPDATE

  void EditGenericItem(int index); // DONE
  void EditBookItem(int index);    // TO UPDATE

  friend class Tester; // Do not remove!
};

#endif
