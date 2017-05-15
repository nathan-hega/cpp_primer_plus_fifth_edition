// Brief: Given a string, that contains special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse the string in a way that special characters are not affected.

// Examples:

// Input:   str = "a,b$c"
// Output:  str = "c,b$a"
// Note that $ and , are not moved anywhere.
// Only subsequence "abc" is reversed

// Input:   str = "Ab,c,de!$"
// Output:  str = "ed,c,bA!$"
// Topics: basic programming

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

  // first iterate and place the special characters in the same spot in the reversed string
  for (int i = 0; i <stringToReverse.length(); ++i) {
    if (!isalpha(stringToReverse[i])) {
      reversedString[i] = stringToReverse[i];
    }
  }

  cout << "reversedString at this point: " << reversedString << endl;

  // now, reverse stringToReverse and place the characters in the first empty slot of reversed string
  for (int i = 0; i < stringToReverse.length(); ++i) {
    char ch = stringToReverse[i];
    if (isalpha(ch)) {
      for (int z = (stringToReverse.length() -1); z >= 0; z--) {
        if (reversedString[z] == ' ') {
          reversedString[z] = ch;
          cout << "character: " << ch << " added to slot: " << z << endl;
          break;
        }
      }
    }
  }

  cout << reversedString << endl;

  return 0;
}