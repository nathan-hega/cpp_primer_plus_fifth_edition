//
// Brief: Calculate data on user supplied input
// Topics: logic, cstdlib
//

#include <iostream>
#include <cstdlib>
const int ArSize = 10;

int main () {
  using namespace std;
  double donations[ArSize];
  double total = 0;
  double average;
  int aboveAverage = 0;

  cout << "Please enter donations:" << endl;
  
  for (int i = 0; i < ArSize; i++) {
    if (cin >> donations[i]) {
      total += donations[i];
      // error case - terminate program
    } else {
      cout << "Invalid Input" << endl;
      exit(EXIT_FAILURE);
    }
  }

  // calculate average
  average = total / ArSize;

  // determine how many numbers in the array are > average
  for (int i = 0; i < ArSize; i++) {
    if (donations[i] > average) {
      aboveAverage++;
    }
  }

  cout << "Average: " << average << endl;
  cout << "Above Average: " << aboveAverage << endl;

  return 0;
}
