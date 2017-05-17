//
// Brief: Convert strings to upper case via references and function calls
// Topics: reference variables, functions
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void strConversion (string & strRef);

int main () {
  string input;

  cout << "Enter a string (q to quit): " << endl;
  while (getline(cin, input) && input != "q") {
    strConversion(input);
    cout << "Converting input string: " << input << endl;
    cout << "Enter another string (q to quit): " << endl;
  }

  cout << "C ya!" << endl;
  return 0;
}

void strConversion (string & strRef) {
  for (int i = 0; i < strRef.length(); ++i) {
    strRef[i] = toupper(strRef[i]);
  }
}