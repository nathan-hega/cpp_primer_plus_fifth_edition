//
// Brief: simple program that demonstrates some cstring library functionality
// Topics: io, cstring
//

#include <iostream>
#include <cstring>

int main () {
  using namespace std;

  int arSize = 80;
  char firstName[arSize];
  char lastName[arSize];
  char combinationString[(arSize*2)];
  
  cout << "Enter your first name: ";
  cin.getline(firstName, 80);
  cout << "Enter your last name: ";
  cin.getline(lastName, 80);

  // cstring functions to construct new string
  strcpy(combinationString, lastName);
  strcat(combinationString, ", ");
  strcat(combinationString, firstName);
  cout << "Here's the information in a single string: " << combinationString << endl;

  return 0;
}
