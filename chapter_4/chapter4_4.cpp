//
// Brief: same as chapter4_3.cpp, only with string objects instead of c-style strings
// Topics: io, string
//

#include <iostream>
#include <string>

int main () {
  using namespace std;

  string firstName;
  string lastName;
  string combinationString;
  
  cout << "Enter your first name: ";
  getline(cin, firstName);
  cout << "Enter your last name: ";
  getline(cin, lastName);

  combinationString = lastName;
  combinationString += ", ";
  combinationString += firstName;

  cout << "Here's the information in a single string: " << combinationString << endl;

  return 0;
}
