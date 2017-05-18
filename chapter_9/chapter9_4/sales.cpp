#include "sales.h"

using namespace SALES;

using std::cin;
using std::cout;
using std::endl;

// non-interactive
void SALES::setSales (Sales & s, const double ar[], int n) {
  double total = 0;
  double sale = 0;
  double min;
  double max = 0;
  int count = (n < QUARTERS) ? n : QUARTERS;

  for (int i = 0; i < QUARTERS; ++i) {
    sale = (i >= n) ? 0 : ar[i];
    s.sales[i] = sale;
    total += sale;

    // update max
    if (sale > max) {
      max = sale;
    }

    // set default min
    if (i == 0) {
      min = sale;
    // update min
    } else if (sale < min) {
      min = sale;
    }
  }

  // set other fields
  s.average = (total/QUARTERS);
  s.max = max;
  s.min = min;
}

// interactive
void SALES::setSales (Sales & s) {
  double total = 0;
  double sale = 0;
  double min;
  double max = 0;

  for (int i = 0; i < QUARTERS; ++i) {
    cout << "Enter sales for slot " << i << ": " << endl;
    cin >> sale;
    s.sales[i] = sale;
    total += sale;

    // update max
    if (sale > max) {
      max = sale;
    }

    // set default min
    if (i == 0) {
      min = sale;
    // update min
    } else if (sale < min) {
      min = sale;
    }
  }

  // set other fields
  s.average = (total/QUARTERS);
  s.max = max;
  s.min = min;
}

void SALES::showSales (const Sales & s) {
  cout << "Sales information: " << endl;
  for (int i = 0; i < QUARTERS; ++i) {
    cout << s.sales[i] << endl;
  }

  cout << "average: " << s.average << endl;
  cout << "max: " << s.max << endl;
  cout << "min: " << s.min << endl;
}