//
// Brief: Class / Multifile program example
// Topics: header files, multifile program, classes
//

#include <iostream>
#include "plorg.cpp"
#include <string>

static const int SIZE = 3;

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main () {
  cout << "Default Plorg." << endl;
  Plorg barry;
  barry.report();
  cout << "Change default Plorg CI." << endl;
  barry.setCI(127);
  barry.report();

  cout << "Constructor Plorg." << endl;
  Plorg jerry("Jerry", 190);
  jerry.report();

  return 0;
}