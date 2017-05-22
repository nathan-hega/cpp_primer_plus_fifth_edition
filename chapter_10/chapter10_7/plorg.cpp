#include <iostream>
#include "plorg.h"

using std::cin;
using std::endl;
using std::cout;
using std::string;

Plorg::Plorg (string name, int ci) {
  this->ci = ci;
  this->name = name;
}

void Plorg::report () const {
  cout << "Plorg name: " << name << "; Plorg CI: " << ci << ";" << endl;
}