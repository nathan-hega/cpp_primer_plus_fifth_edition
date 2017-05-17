//
// Brief: Silly function that demonstrates some function concepts
// Topics: static variables, global variables, default arguments
//

#include <iostream>
#include <string>

using namespace std;
int count = 0;

void strPrint (string * strPtr, int n = 0);

int main () {
  string strOne = "String One";
  string strTwo = "String Two";
  string strThree = "String Three";

  cout << "Should print out \"" << strOne << "\" one time." << endl;
  strPrint(&strOne);
  cout << "Should print out \"" << strTwo << "\" one time." << endl;
  strPrint(&strTwo);
  cout << "Should print out \"" << strThree << "\" two times." << endl;
  strPrint(&strThree, 1);

  cout << "C ya!" << endl;
  return 0;
}

void strPrint (string * strPtr, int n) {
  if (n > 0) {
    // print string # of times this function was called (global static count variable);
    // I didn't think I would need to add the :: operator to the count variable given that
    // there is no local scope variable 'count' to interfere or make any reference to the global
    // count ambiguous, but alas I had to in order for the code to compile
    for (int i = 0; i < ::count; ++i) {
      cout << *strPtr << endl;
    }
  } else {
    cout << *strPtr << endl;
  }

  ::count++;
}