//
// Brief: Multifile program example
// Topics: header files, multifile program, namespaces
//

#include <iostream>
#include "sales.cpp"

const static int SIZE = 2;

using std::cin;
using std::endl;
using std::cout;

int main () {
  using SALES::Sales;
  using SALES::setSales;
  using SALES::showSales;

  Sales salesOne;
  // interactive version
  setSales(salesOne);
  showSales(salesOne);

  double ar[SIZE] = {2,2};
  Sales salesTwo;
  setSales(salesTwo, ar, SIZE);
  showSales(salesTwo);


  return 0;
}