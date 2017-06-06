//
// Brief: Inheritance example
// Topics: classes, friend functions, operator overloads, virtual functions, inheritance, references, pointers
//


#include "port.cpp"
#include <iostream>

using std::cout;
using std::endl;

int main () {
  Port empty;
  cout << "empty.Show(): " << endl;
  empty.Show();
  cout << endl;

  Port p1 = Port("Seagrams", "tawny", 201);
  cout << "p1.Show(): " << endl;
  p1.Show();
  cout << "cout << p1: " << p1 << endl;

  cout << "assignment operator empty = p1: " << endl;
  empty = p1;
  cout << "cout << empty: " << empty << endl;
  cout << "bottle adjustment: empty + 10" << endl;
  empty += 10;
  empty.Show();
  cout << "bottle adjustment: empty - 100" << endl;
  empty -= 100;
  empty.Show();

  cout << "copy constructor: Port p2(empty);" << endl;
  Port p2(empty);
  p2.Show();

  cout << "vintage port empty constructor: " << endl;
  VintagePort vpEmpty;
  vpEmpty.Show();

  cout << "vintage port non-empty constructor: " << endl;
  VintagePort vp1("bailey's", 77, "old greg", 2001);
  vp1.Show();

   cout << "assign port to vintage port object: " << endl;
   Port & rPort = vp1;
   p2 = rPort; // should match Port.operator=(const Port & p)
   p2.Show();

  return 0;
}