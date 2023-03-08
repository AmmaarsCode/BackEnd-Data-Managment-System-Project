// You don't need to update this file.

#ifndef _UTILITIES
#define _UTILITIES

#include <string>
#include <vector>
using namespace std;

//! Responsible for getting the user's integer input from the keyboard
int GetIntegerInput(int min, int max); // TO UPDATE

//! Responsible for checking to see if an integer choice is between the min and
//! max range
bool IsValidInput(int choice, int min, int max); // TO UPDATE

//! Calculates the price of an item, plus the tax
float CalculatePricePlusTax(float price, float taxPercent); // TO UPDATE

//! Display a header to the screen
void DisplayHeader(string label); // DONE

//! Display a menu to the screen
void DisplayMenu(vector<string> options); // DONE

//! Waits for the user to hit ENTER before continuing
void PressEnterToContinue(bool needIgnore = true); // DONE

//! Gets a timestamp as a string
string GetCurrentTimestamp(); // DONE

//! Shortens a string so it can be displayed within its column
string ShortenString(string original, int length); // DONE

//! Converts a string to all lower-case letters
string ToLower(string original); // DONE

#endif
