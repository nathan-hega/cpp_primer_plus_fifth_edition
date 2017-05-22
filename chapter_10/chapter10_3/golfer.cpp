#include <iostream>
#include "golfer.h"
#include <cstring>

using std::cin;
using std::endl;
using std::cout;
using std::string;

Golfer::Golfer (const string name, int hc) {
  fullname = name;
  handicap = hc;
}

int Golfer::setgolf () {
  string name;
  int hc;

  cout << "Enter name: " << endl;
  getline(cin, name);

  if (name == "") {
    return 0;
  } else {
    cout << "Enter handicap: " << endl;
    cin >> hc;
    // flush newline
    cin.get();

    Golfer temp(name, hc);
    *this = temp;
    return 1;
  }
}

void Golfer::show () const {
  cout << "Fullname: " << fullname << endl <<
          "Handicap: " << handicap << endl;
}