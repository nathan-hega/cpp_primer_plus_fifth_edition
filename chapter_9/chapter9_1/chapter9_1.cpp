//
// Brief: Multifile program example
// Topics: header files, multifile program
//

#include <iostream>
#include "golf.cpp"
#include <string>

static const int SIZE = 3;

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main () {
  string input;
  int i = 0;
  // array of golfers
  golf * golfAr = new golf[SIZE];

  while (i < SIZE && setgolf(golfAr[i])) {
    showgolf(golfAr[i]);
    i++;
  }

  golf manualGolfer;
  setgolf(manualGolfer, "Peter Shark", 123);
  showgolf(manualGolfer);
  cout << "Change handicap for manualGolfer." << endl;
  handicap(manualGolfer, 77);
  showgolf(manualGolfer);

  return 0;
}