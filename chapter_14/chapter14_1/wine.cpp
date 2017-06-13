#include "wine.h"

using std::cin;
using std::cout;
using std::endl;


Wine::Wine (const char * l, int y, const int yr[], const int bot[]) {
  name = l;
  years = y;
  // set size of valarray in pair object
  stock = std::make_pair(intArray(yr, y), intArray(bot, y));
}

Wine::Wine (const char * l, int y) {
  name = l;
  years = y;
  stock = std::make_pair(intArray(y), intArray(y));
}

void Wine::GetBottles () {
  int year;
  int count;

  for (int i = 0; i < years; ++i) {
    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter a bottle count: ";
    cin >> count;

    stock.first[i] = year;
    stock.second[i] = count;
  }
}

string & Wine::Label () {
  return name;
}

int Wine::sum () {
  return stock.second.sum();
}

void Wine::Show() {
  cout << name << endl;
  cout << "-----------------------" << endl;

  for (int i = 0; i < years; ++i) {
    cout << "Year: " << stock.first[i] << " | Count: " << stock.second[i] << endl;
  }
  cout << endl;
}