#include "cow.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;
using std::strlen;
using std::strcpy;
using std::strncpy;

Cow::Cow () {
  strcpy(name, "N/A");
  // allocate space for hobby instead of assigning NULL
  hobby = new char[4];
  strcpy(hobby, "N/A");
  weight = 0;
}

Cow::Cow (const char * nm, const char * ho, double wt) {
  int len = strlen(nm);
  if (len >= NAMESIZE) {
    strncpy(name, nm, (NAMESIZE - 1));
    name[(NAMESIZE - 1)] = '\0';
  } else {
    strcpy(name, nm);
  }

  // allocate memory for hobby
  len = strlen(ho);
  hobby = new char[len];
  strcpy(hobby, ho);

  weight = wt;
}

// copy constructor
Cow::Cow (const Cow & c) {
  strcpy(name, c.name);

  // allocate memory for hobby
  int len = strlen(c.hobby);
  hobby = new char[len];
  strcpy(hobby, c.hobby);

  weight = c.weight;
}

Cow::~Cow () {
  delete[] hobby;
}

// assignment operator overload
Cow & Cow::operator= (const Cow & c) {
  strcpy(name, c.name);

  // delete old memory for hobby
  delete [] hobby;

  // allocate memory for hobby
  int len = strlen(c.hobby);
  hobby = new char[len];
  strcpy(hobby, c.hobby);

  weight = c.weight;

  return *this;
}

void Cow::ShowCow() const {
  cout << "name: " << name << endl
       << "hobby: " << hobby << endl
       << "weight: " << weight << endl;
}