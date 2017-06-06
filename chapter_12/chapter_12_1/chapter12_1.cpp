//
// Brief: Basic class example
// Topics: classes, operator overloads
//

#include "cow.cpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main () {
  // argument constructor
  Cow bertha("Bertha", "Fencing", 20);
  bertha.ShowCow();

  // argument constructor, checking string length logic
  Cow longName("1234567890123456789012", "this is a long string for hobby", 310.39);
  longName.ShowCow();

  // empty constructor
  Cow empty;
  empty.ShowCow();

  // copy constructor
  Cow copy = empty;
  copy.setWeight(123.32);
  copy.ShowCow();

  // assignment operator
  empty = bertha;
  empty.ShowCow();

  return 0;
}