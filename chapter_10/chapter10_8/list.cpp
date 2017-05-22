#include <iostream>
#include "list.h"

using std::cin;
using std::endl;
using std::cout;

List::List() {
  top = 0;
}

List::List (Item ar[], int size) {
  // copy contents of ar[] into list up to MAX
  size = (size > MAX) ? MAX : size;
  for (int i = 0; i < size; ++i) {
    items[i] = ar[i];
    top++;
  }
}

bool List::add (Item item) {
  if (!this->isFull()) {
    items[top] = item;
    top++;
    return true;
  } else {
    return false;
  }
}

void List::each (functionParameter f) {
  for (int i = 0; i < top; ++i) {
    // execute a user defined function on each element
    f(items[i]);
  }
}

void List::show () const {
  cout << "List has " << top << " # of elements" << endl;
  for (int i = 0; i < top; ++i) {
    cout << "items[" << i << "]: " << items[i] << endl;
  }
  cout << "***************************" << endl;
}