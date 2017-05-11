//
// Brief: solve the fizzbuzz problem (google if unfamiliar)
// Topics: basic programming
//

#include <iostream>
using namespace std;

int main () {
  double divisibleByThree;
  double divisibleByNine;

  for (int i = 1; i <= 100; ++i) {
    divisibleByThree = i % 3;
    divisibleByNine = i % 9;

    if (divisibleByThree == 0 && divisibleByNine == 0) {
      cout << "FizzBuzz";
    } else if (divisibleByThree == 0) {
      cout << "Fizz";
    } else if (divisibleByNine == 0) {
      cout << "Buzz";
    } else {
      cout << i;
    }

    cout << endl;
  }
  

  return 0;
}
