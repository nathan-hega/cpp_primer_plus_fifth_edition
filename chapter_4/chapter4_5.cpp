//
// Brief: basic example code that utilizes a structure
// Topics: string, structures
//

#include <iostream>
#include <string>

int main () {
  using namespace std;

  struct candyBar {
    string brand;
    double weight;
    int calories;
  };

  candyBar snack = {"Dark Eco", 14.5, 150};

  cout << "Brand: " << snack.brand << endl
       << "Weight: " << snack.weight << endl
       << "Calories: " << snack.calories << endl;

  return 0;
}
