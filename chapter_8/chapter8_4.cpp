//
// Brief: Sample program to demonstrate function concepts
// Topics: const, function overloading, reference variables, pointers, dynamic memory
//

#include <iostream>
#include <cstring>

using namespace std;

struct stringy {
  char * str;
  int ct;
};

// prototypes for set(), show(), and show() go here
void set (stringy & stringyRef, char * charPtr);
void show (const stringy & stringyRef, const int n = 1);
void show (const char * charPtr, const int n = 1);

int main () {
  stringy beany;
  char testing[] = "Reality isn't what it used to be";

  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Done!");

  return 0;
}

void set (stringy & stringyRef, char * charPtr) {
  int len = strlen(charPtr);
  // allocate space to store string
  stringyRef.str = new char[len];
  // copy string into member variable
  strcpy(stringyRef.str, charPtr);
  // update ct
  stringyRef.ct = len;
  cout << "str: " << stringyRef.str << " ct: " << stringyRef.ct << endl;
}

void show (const stringy & stringyRef, int n) {
  if (n > 1) {
    for (int i = 0; i < n; ++i) {
      cout << "member string[" << i << "]: " << stringyRef.str << endl;
    }
  } else {
    cout << "member string: " << stringyRef.str << endl;
  }
}

void show (const char * charPtr, int n) {
  if (n > 1) {
    for (int i = 0; i < n; ++i) {
      cout << "string[" << i << "]: " << charPtr << endl;
    }
  } else {
    cout << "string: " << charPtr << endl;
  }
}