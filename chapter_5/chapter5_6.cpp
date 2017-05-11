//
// Brief: Dynamically create an array of "car" structures.
// Topics: structures, io, loops, arrays, pointers
//

#include <iostream>

int main () {
  using namespace std;
  struct car {
    string make;
    int year;
  };
  int count;
  cout << "How many cars are in your collection?" << endl;
  (cin >> count).get();

  car * collection = new car[count];
  for (int i = 1; i <= count; i++) {
    cout << "Car #" << i << endl;
    cout << "Please enter the make: ";
    getline(cin, collection[i-1].make);
    cout << "Please enter the year: ";
    (cin >> collection[i-1].year).get();
  }
  
  // display collection
  cout << "Here is your collection:" << endl;
  for (int i = 0; i < count; ++i) {
    cout << collection[i].year << " " << collection[i].make << endl;
  }

  delete[] collection;
  return 0;
}
