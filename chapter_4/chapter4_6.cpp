//
// Brief: basic example code that utilizes an array of structures
// Topics: string, structures, arrays
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

  candyBar snacks[3] = {
    {"Dark Eco", 14.5, 150},
    {"Dark Eco Quinoa", 15.5, 350},
    {"Dark Eco Almond", 16.5, 250}
  };

  cout << "************************" << endl;

  cout << "Brand: " << snacks[0].brand << endl
       << "Weight: " << snacks[0].weight << endl
       << "Calories: " << snacks[0].calories;

  cout << endl << "************************" << endl;

  cout << "Brand: " << snacks[1].brand << endl
       << "Weight: " << snacks[1].weight << endl
       << "Calories: " << snacks[1].calories;

  cout << endl << "************************" << endl;

  cout << "Brand: " << snacks[2].brand << endl
       << "Weight: " << snacks[2].weight << endl
       << "Calories: " << snacks[2].calories;

  cout << endl << "************************" << endl;

  return 0;
}
