//
// Brief: calculate factorials recursively
// Topics: recursion, functions
//

#include <iostream>

unsigned int factorial (int n);

int main () {
  using namespace std;
  int factor;
  int result;

  cout << "Please enter a factor: " << endl;
  while ((cin >> factor) && (factor > 0)) {
    result = factorial(factor);

    cout << "Factorial of " << factor << " is: " << result << endl;
    cout << "Enter another factor: " << endl;
  }

  cout << "C ya!" << endl;
  return 0;
}

unsigned int factorial (int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}