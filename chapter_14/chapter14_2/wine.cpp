#include "wine.h"

using std::cin;
using std::cout;
using std::endl;


Wine::Wine (const char * l, int y, const int yr[], const int bot[])
: string(l), pairArray(intArray(yr, y), intArray(bot, y)), years(y)
{
}

Wine::Wine (const char * l, int y)
: string(l), pairArray(intArray(y), intArray(y)), years(y)
{
}

void Wine::GetBottles () {
  int year;
  int count;

  for (int i = 0; i < years; ++i) {
    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter a bottle count: ";
    cin >> count;

    pairArray::first()[i] = year;
    pairArray::second()[i] = count;
  }
}

string & Wine::Label () {
  return (string &)(*this);
}

int Wine::sum () {
  return pairArray::second().sum();
}

void Wine::Show() {
  cout << (const string &)(*this) << endl;
  cout << "-----------------------" << endl;

  for (int i = 0; i < years; ++i) {
    cout << "Year: " << pairArray::first()[i]
         << " | Count: " << pairArray::second()[i] << endl;
  }
  cout << endl;
}