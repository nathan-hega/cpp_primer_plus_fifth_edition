//
// Brief: Same as chapter5_4, only with 3 years of sales data and a 2D array
// Topics: loops, 2d arrays
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
  int sales[3][12];
  const int year = 2014;

  // three years of sales data
  for (int z = 0; z < 3; z++) {
    for (int i = 0; i < 12; i++) {
      cout << "Enter the sales for " << months[i] << " (" << (year+z) << "): ";
      cin >> sales[z][i];
    }
  }

  // determine final sales by iterating through the sales array
  cout << "***************************************" << endl;
  int sumCombined = 0;
  for (int z = 0; z < 3; z++) {
    int yearlySum = 0;
    for (int i = 0; i < 12; i++) {
      sumCombined += sales[z][i];
      yearlySum += sales[z][i];
    }
    cout << "Total number of books sold for " << (year+z) << ": " << yearlySum << endl;
  }
  cout << "Total number of books sold for all years: " << sumCombined << endl;
  return 0;
}
