#include <iostream>
#include "golf.h"
#include <cstring>

using std::cin;
using std::endl;
using std::cout;
using std::string;

void setgolf (golf & g, const char * name, int hc) {
  g.fullname = name;
  g.handicap = hc;
}

int setgolf (golf & g) {
  cout << "Enter name: " << endl;
  getline(cin, g.fullname);

  if (g.fullname == "") {
    return 0;
  } else {
    cout << "Enter handicap: " << endl;
    cin >> g.handicap;
    // flush newline
    cin.get();

    return 1;
  }
}

void handicap (golf & g, int hc) {
  g.handicap = hc;
}

void showgolf (const golf & g) {
  cout << "Fullname: " << g.fullname << endl <<
          "Handicap: " << g.handicap << endl;
}