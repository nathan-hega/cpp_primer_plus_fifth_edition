// Brief: Given a string, that contains special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse the string in a way that special characters are not affected.

// Examples:

// Input:   str = "a,b$c"
// Output:  str = "c,b$a"
// Note that $ and , are not moved anywhere.
// Only subsequence "abc" is reversed

// Input:   str = "Ab,c,de!$"
// Output:  str = "ed,c,bA!$"
// Topics: basic programming

// *Note: I did not come up with this solution on my own, I stopped after "reversal_optimization.cpp"*

#include <iostream>
#include <string>
#include <cctype>

int main () {
  using namespace std;

  string stringToReverse;

  cout << "Enter a string to reverse! The string should only include special characters and alphabet characters." << endl;
  cin >> stringToReverse;

  // two pointers to the string that start from opposite ends
  // skip special characters, swap alpha characters
  int i = 0;
  int z = stringToReverse.length() - 1;

  while (i < z) {
    char entryChar = stringToReverse[i];
    char exitChar = stringToReverse[z];

    if (!isalpha(entryChar)) {
      i++;
    } else if (!isalpha(exitChar)) {
      z--;
    } else {
      // swap
      stringToReverse[i] = exitChar;
      stringToReverse[z] = entryChar;
      i++;
      z--;
    }
  }

  cout << stringToReverse << endl;

  return 0;
}