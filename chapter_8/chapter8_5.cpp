//
// Brief: A brief example of template functions
// Topics: template functions
//

#include <iostream>
using namespace std;
const static int SIZE = 5;

template <typename T>
T max (T ar[]);

int main () {
  double dblArray[SIZE] = {12.0, 13.5, 242.12, 21.34, 124.7};
  int intArray[SIZE] = {1,5,3,8,2};

  cout << "Largest member of the dblArray: " << max(dblArray) << endl;
  cout << "Largest member of the intArray: " << max(intArray) << endl;

  return 0;
}

template <typename T>
T max (T ar[]) {
  T largest = 0;
  for (int i = 0; i < SIZE; ++i) {
    if (ar[i] > largest) {
      largest = ar[i];
    }
  }
  return largest;
}