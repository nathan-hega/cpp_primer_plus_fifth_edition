//
// Brief: simple example program that demonstrates the value of pointers
// Topics: pointers
//

#include <iostream>
using namespace std;

int main () {
  char character = 'N';
  int icharacter = character;
  char *charptr = &character;

  cout << "This is the character " << character << ". It's value is: " << icharacter << endl;
  
  cout << "Add one...." << endl;
  character = character + 1;

  // icharacter does not automatically update when character updates
  cout << "This is the character " << character << ". It's integer value (icharacter) is NOT: " << icharacter << endl;
  
  // our pointer to character DOES update when character is adjusted
  cout << "The true integer value for character after the adjustment ((int)*charptr) is: " << (int)*charptr << endl;
  

  return 0;
}
