#include "Program.h"
#include "Tester.h"
#include "Utilities.h"

#include <iostream>
using namespace std;

/**
You don't need to update main. You can run different arguments to
run the full program or run unit tests.
*/
int main(int argumentCount, char *argumentList[]) {
  // You don't need to update main
  cout << "Argument count: " << argumentCount << endl;

  if (argumentCount == 1) {
    cout << "EXPECTED ARGUMENTS:" << endl;
    cout << argumentList[0] << " run" << endl;
    cout << argumentList[0] << " test storeitems" << endl;
    cout << argumentList[0] << " test books" << endl;
    cout << argumentList[0] << " test utilities" << endl;
    cout << argumentList[0] << " test program" << endl;
    cout << argumentList[0] << " test all" << endl;
  }

  //    cout << "Arguments: " << endl;
  //    for ( int i = 0; i < argumentCount; i++ )
  //    {
  //        cout << i << ". \"" << argumentList[i] << "\"" << endl;
  //    }

  string command = "";
  if (argumentCount >= 2) {
    command = ToLower(argumentList[1]);
  }

  if (command == "run") {
    Program bookstoreProgram("Books 'n' More");
    bookstoreProgram.Run();
  }

  if (argumentCount >= 3) {
    Tester tester;
    string testToRun = ToLower(argumentList[2]);
    if (testToRun == "storeitems") {
      tester.Test_StoreItems();
    } else if (testToRun == "books") {
      tester.Test_Books();
    } else if (testToRun == "program") {
      tester.Test_Program();
    } else if (testToRun == "utilities") {
      tester.Test_Utilities();
    } else if (testToRun == "all") {
      tester.Test_Utilities();
      tester.Test_StoreItems();
      tester.Test_Books();
      tester.Test_Program();
    }
    return 0;
  }

  return 0;
}
