//
// Brief: Add all integers between the two user supplied integers.
// Topics: loops
//

#include <iostream>

int main () {
  using namespace std;

  int floor;
  int ceiling;
  int sum;

  cout << "Enter a floor: ";
  cin >> floor;
  cout << "Enter a ceiling: ";
  cin >> ceiling;

  for (int i=floor; i <= ceiling; i++) {
    sum += i;
  }

  cout << endl << "The sum of x where x is every integer between the floor and ceilling (" << floor << " <= x <= " << ceiling << ") is: " << sum << endl;

  return 0;
}
