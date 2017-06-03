#include "stack.cpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ostream;

int main () {
  // default constructor + isEmpty + isFull + push tests
  Stack stackOne(4);
  cout << "stackOne isEmpty(): " << stackOne.isEmpty() << endl;
  stackOne.push(111111);
  stackOne.push(222222);
  stackOne.push(333333);
  stackOne.push(444444);
  cout << stackOne;
  cout << "stackOne isFull(): " << stackOne.isFull() << endl;

  // pop test
  Item popped;
  stackOne.pop(popped);
  cout << "popped: " << popped << endl;
  cout << stackOne;

  // copy constructor
  Stack stackTwo(stackOne);
  cout << "stackTwo: \n" << stackTwo;
  stackTwo.push(444444);
  cout << "stackTwo: \n" << stackTwo;
  cout << "stackOne: \n" << stackOne;

  // clear stackOne
  while (stackOne.pop(popped));
  cout << "stackOne: \n" << stackOne;

  // assignment operator
  stackOne = stackTwo;
  cout << "stackOne: \n" << stackOne;


  return 0;
}