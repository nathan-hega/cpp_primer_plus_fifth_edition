//
// Brief: User enters a number that represents book sales for each month of the year. Program then adds the sales after storing.
// Topics: loops
//

#include <iostream>

int main () {
  using namespace std;
  const string months[12] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
  };
 
  int sales[12];

  for (int i = 0; i < 12; i++) {
    cout << "Enter the sales for " << months[i] << ": ";
    cin >> sales[i];
  }

  // determine final sales by iterating through the sales array
  int sum = 0;
  for (int i = 0; i < 12; i++) {
    sum += sales[i];
  }

  cout << "Total number of books sold: " << sum << endl;
  return 0;
}
