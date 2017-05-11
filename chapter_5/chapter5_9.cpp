//
// Brief: Print out a table pattern based on user input
// Topics: string, loops
//

#include <iostream>
#include <string>

int main () {
  using namespace std;
  int rows = 0;
  string symbol;

  cout << "Enter the rows to display:" << endl;
  cin >> rows;

  for (int i = 0; i < rows; i++) {
    for (int z = 0; z < rows; z++) {
      if (((i+1)+z) >= rows) {
        symbol = "*";
      } else {
        symbol = ".";
      }
      cout << symbol;
    }
    cout << endl;
  }

  
  return 0;
}
