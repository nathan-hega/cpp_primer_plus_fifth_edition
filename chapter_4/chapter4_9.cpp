//
// Brief: example of utilizing dynamic memory to allocate an array of structures
// Topics: string, structures, arrays, pointers, dynamic memory
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

  candyBar * snacks = new candyBar[3];

  snacks[0].brand = "Dark Eco";
  snacks[0].weight = 14.5;
  snacks[0].calories = 150;

  snacks[1].brand = "Dark Eco Quinoa";
  snacks[1].weight = 15.5;
  snacks[1].calories = 350;

  snacks[2].brand = "Dark Eco Almond";
  snacks[2].weight = 16.5;
  snacks[2].calories = 250;

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

  delete[] snacks;

  return 0;
}
