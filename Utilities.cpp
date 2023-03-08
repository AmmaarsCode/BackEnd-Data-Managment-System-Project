#include "Utilities.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
using namespace std;

/**
IsValidInput
@param  choice      The choice we are checking for validity with
@param  min         The minimum valid value
@param  max         The maximum valid value

Returns `true` if the `choice` variable is BETWEEN `min` and `max` (inclusive).
Returns `false` otherwise.
*/
bool IsValidInput(int choice, int min, int max) // TO UPDATE
{
  if(choice <= max && choice >= min){
    return true;
  }
  return false; // THIS IS A PLACEHOLDER. REMOVE THIS LINE WHEN YOU IMPLEMENT
                // THE FUNCTION.
}

/**
GetIntegerInput
@param  min     The minimum valid value
@param  max     The maximum valid value

This function prompts the user to enter a number between
the `min` and `max` value. Use cout and cin here.
Then, validate that their input is VALID using the `IsValidInput` function.
While it is not valid,
use a while loop to ask them to enter another number.
Once the item is valid, return the selection.
*/
int GetIntegerInput(int min, int max) // TO UPDATE
{
  int j = 0;
  cout << "Please enter a number between (" << min << " and " << max << " )" << endl;
  cin >> j;
  IsValidInput(j, min,  max); // Calling the function this way does nothing
  while (IsValidInput(j, min,  max) == false){
    cout << "Please enter another number between (" << min << " AND " << max << " )" << endl;
    cin >> j;
  }

  return j; // THIS IS A PLACEHOLDER. REMOVE THIS LINE WHEN YOU IMPLEMENT THE
            // FUNCTION.
}

/**
CalculatePricePlusTax
@param  price       The original price of an item
@param  taxPercent  The tax rate, as a percentage
@return             Returns the updated price, the original price PLUS ( price *
taxDecimal )

Calculates the price plus tax. Tax here is given as a percentage,
so it will need to be converted to a decimal value.
*/
float CalculatePricePlusTax(float price, float taxPercent) // TO UPDATE
{
  float percent = taxPercent / 100;
  float calculate = price * percent;
  float result = price + calculate;
  return result; // THIS IS A PLACEHOLDER. REMOVE THIS LINE WHEN YOU IMPLEMENT THE
            // FUNCTION.
}

/**
    This function takes in a vector of strings and should display
    a numbered list to the screen using cout statements within
    a for loop. Make sure to display the INDEX of each option as well.
*/
void DisplayMenu(vector<string> options) // DONE
{
  for (unsigned int i = 0; i < options.size(); i++) {
    cout << i << ". " << options[i] << endl;
  }
}

/**
    This function should display a clear horizontal bar and the label.
*/
void DisplayHeader(string label) // DONE
{
// Clear the screen:
#if defined(WIN32) || defined(_WIN32) ||                                       \
    defined(__WIN32) && !defined(__CYGWIN__)
  system("cls");
#else
  system("clear");
#endif

  // Display header:
  cout << endl << string(80, '*') << endl;
  cout << "* " << label << " *" << endl << endl;
}

/**
    Displays a "PRESS ENTER TO CONTINUE" and waits for the enter key.
*/
void PressEnterToContinue(bool needIgnore) // DONE
{
  cout << endl << "- PRESS ENTER TO CONTINUE -" << endl;

  if (needIgnore) {
    cin.ignore();
  }
  string trash;
  getline(cin, trash);
}

/**
Gets the current timestamp in UNIX time and returns it as a string.
*/
string GetCurrentTimestamp() // DONE
{
  time_t now = time(0);
  stringstream stream;
  stream << now;
  return stream.str();
}

/**
Truncates the string if it's above the length given
*/
string ShortenString(string original, int length) // DONE
{
  string truncated = original;
  if (truncated.size() > length) {
    truncated = truncated.substr(0, length - 4) + "... ";
  }
  return truncated;
}

/**
Turn all the letters of the original string to lower-case
*/
string ToLower(string original) // DONE
{
  string newString = "";
  for (unsigned int i = 0; i < original.size(); i++) {
    newString += tolower(original[i]);
  }
  return newString;
}
