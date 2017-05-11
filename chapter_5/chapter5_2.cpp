//
// Brief: Add user supplied integers from the command line until a terminating int is supplied.
// Topics: loops
//

#include <iostream>

int main () {
  using namespace std;

  int sum = 0;
  int input;

  cout << "Enter a number to be added: ";
  cin >> input;
  
  while (input != 0) {
    sum += (int)input;
    cout << "The sum is now: " << sum << endl;

    cout << "Enter another number to be added, or '0' to terminate: ";
    cin >> input;
  }

  return 0;
}
