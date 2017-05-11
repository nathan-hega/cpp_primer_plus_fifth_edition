//
// Brief: Determines when Cleo's investment is greater than Daphne's
// Topics: loops
//

#include <iostream>

int main () {
  using namespace std;

  double daphneInterest = .10;
  double cleoInterest = .05;
  double daphneInitial = 100;
  double daphneTotal = daphneInitial;
  double cleoTotal = 100;

  for (int year = 1; cleoTotal <= daphneTotal; year++) {
    daphneTotal = daphneTotal + (daphneInitial * daphneInterest);
    cleoTotal = cleoTotal + (cleoTotal * cleoInterest);

    cout << "After " << year << " year(s): " << endl <<
    "Daphne's total is: " << daphneTotal << endl <<
    "Cleo's total is: " << cleoTotal << endl <<
    "****************************************************" << endl;
  }


  return 0;
}
