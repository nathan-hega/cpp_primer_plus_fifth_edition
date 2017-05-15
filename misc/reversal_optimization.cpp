// Brief: Given a string, that contains special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse the string in a way that special characters are not affected.

// Examples:

// Input:   str = "a,b$c"
// Output:  str = "c,b$a"
// Note that $ and , are not moved anywhere.
// Only subsequence "abc" is reversed

// Input:   str = "Ab,c,de!$"
// Output:  str = "ed,c,bA!$"
// Topics: basic programming

// *Optimized to drop a loop sequence*

#include <iostream>
#include <string>
#include <cctype>

int main () {
  using namespace std;

  string stringToReverse;

  cout << "Enter a string to reverse! The string should only include special characters and alphabet characters." << endl;
  cin >> stringToReverse;

  // instantialize a string and fill it with spaces for safe keeping
  string reversedString(stringToReverse.length(), ' ');

  // now, reverse stringToReverse and place the characters in the first empty slot of reversed string
  // also, copy special characters as you iterate through the loop
  for (int i = 0; i < stringToReverse.length(); ++i) {
    char ch = stringToReverse[i];
    if (isalpha(ch)) {
      for (int z = (stringToReverse.length() -1); z >= 0; z--) {
        // find first open slot here
        // determine emptiness by looking at two conditions:
        // 1. make sure the slot is actually empty ' '
        // 2. make sure the slot won't host a special character that has yet to be moved
        if (!isalpha(stringToReverse[z])) {
          reversedString[z] = stringToReverse[z];
          // don't break here! otherwise ch will never bet set!
        } else if (reversedString[z] == ' '){
          reversedString[z] = ch;
          // break here or we overwrite valid letters with the last letter of stringToReverse!
          break;
        }
      }
    }
  }

  cout << reversedString << endl;

  return 0;
}