//
// Brief: Class / Multifile program example
// Topics: header files, multifile program, classes
//

#include <iostream>
#include "golfer.cpp"
#include <string>

static const int SIZE = 3;

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main () {
  string input;
  int i = 0;

  Golfer * golfAr = new Golfer[SIZE];

  while (i < SIZE && golfAr[i].setgolf()) {
    golfAr[i].show();
    i++;
  }

  // setgolf(manualGolfer, "Peter Shark", 123);
  Golfer manualGolfer("Peter Shark", 123);
  // showgolf(manualGolfer);
  manualGolfer.show();
  cout << "Change handicap for manualGolfer." << endl;
  // handicap(manualGolfer, 77);
  manualGolfer.setHandicap(77);
  // showgolf(manualGolfer);
  manualGolfer.show();

  delete[] golfAr;

  return 0;
}