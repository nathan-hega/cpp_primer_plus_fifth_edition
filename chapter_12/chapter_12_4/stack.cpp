#include "stack.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ostream;


Stack::Stack (int n) {
  top = 0;
  size = n;
  pitems = new Item[size];
}

// copy constructor
Stack::Stack (const Stack & st) {
  size = st.size;
  top = st.top;
  pitems = new Item[st.size];

  // copy each element
  for (int i = 0; i < top; ++i) {
    pitems[i] = st.pitems[i];
  }
}

Stack::~Stack () {
  delete [] pitems;
}

bool Stack::isEmpty () const {
  return top == 0;
}

bool Stack::isFull () const {
  return top == size;
}

bool Stack::push (const Item & item) {
  if (!isFull()) {
    pitems[top++] = item;
    return true;
  } else {
    return false;
  }
}

bool Stack::pop (Item & item) {
  if (!isEmpty()) {
    item = pitems[--top];
    return true;
  } else {
    return false;
  }
}

Stack & Stack::operator=(const Stack & st) {
  // clear any memory that may be associated with "this"
  delete [] pitems;

  size = st.size;
  top = st.top;
  pitems = new Item[size];

  // copy each element
  for (int i = 0; i < top; ++i) {
    pitems[i] = st.pitems[i];
  }

  return *this;
}

ostream & operator<< (ostream & os, const Stack & st) {
  for (int i = 0; i < st.top; ++i) {
    os << "Element[" << i << "] = " << st.pitems[i] << endl;
  }
  return os;
}
