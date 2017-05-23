//
// Brief: Implementing Complex class.
// Topics: operator overloads, >> overload, << overload
//

#include <iostream>
#include "complex0.cpp"

using namespace std;

int main () {
  Complex a(3, 4);
  Complex c;
  cout << "Enter a complex number (q to quit): \n";
  while (cin >> c) {
    cout << "c is " << c << endl;
    cout << "complex conjugate is " << ~c << endl;
    cout << "a is " << a << endl;
    cout << "a + c is " << a + c << endl;
    cout << "a - c is " << a - c << endl;
    cout << "a * c is " << a * c << endl;
    cout << "2 * c is " << 2 * c << endl;
    cout << "Enter a complex number (q to quit): \n";
  }

  cout << "C ya!" << endl;

}