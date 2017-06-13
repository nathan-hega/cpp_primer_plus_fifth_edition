#ifndef WINE_H
#define WINE_H

#include <string>
#include <valarray>

using std::pair;
using std::string;

class Wine {
  private:
    typedef std::valarray<int> intArray;
    string name;
    pair<intArray, intArray> stock;
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