#ifndef WINE_H
#define WINE_H

#include <string>
#include <valarray>
#include "pair.cpp"

// had to switch to the book-defined Pair class because std::pair had no
// first / second accessor methods. I tried to use std::get<0|1>(pairArray) to access
// the members, but that did not work. I believe std::get needs an instance of an object,
// not a typename
using std::string;

typedef std::valarray<int> intArray;
typedef Pair<intArray, intArray> pairArray;

class Wine : private string, private pairArray {
  private:
    int years;
  public:
    Wine (const char * l, int y, const int yr[], const int bot[]);
    Wine (const char * l = "Null", int y = 0); // default
    void GetBottles ();
    string & Label ();
    int sum ();
    void Show();
};

#endif