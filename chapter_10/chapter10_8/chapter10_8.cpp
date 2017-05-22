//
// Brief: Class / Multifile program example
// Topics: header files, multifile program, classes, function pointers, ADT
//

#include <iostream>
#include "list.cpp"

using std::cin;
using std::endl;
using std::cout;

void iterator (Item & i);

int main () {
  cout << "Creating empty list firstList." << endl;
  List firstList;
  cout << "firstList isEmpty(): " << firstList.isEmpty() << endl;
  firstList.show();
  cout << "Adding some elements to firstList." << endl;
  firstList.add(219743);
  firstList.add(247);
  firstList.add(1283);
  firstList.add(1283);
  firstList.show();
  cout << "firstList isFull(): " << firstList.isFull() << endl;

  cout << "Creating list with array that is too large." << endl;
  Item ar[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  List secondList(ar, 15);
  cout << "secondList isFull(): " << secondList.isFull() << endl;
  secondList.show();

  cout << "Creating list with array that is too small." << endl;
  Item arr[4] = {1,2,3,4};
  List thirdList(ar, 4);
  cout << "thirdList isFull(): " << thirdList.isFull() << endl;
  thirdList.show();
  cout << "Applying iterator function to thirdList:" << endl;
  thirdList.each(&iterator);
  thirdList.show();

}

void iterator (Item & i) {
  // simple iterator function
  i = i * 10;
}