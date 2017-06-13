// implementation incomplete

#include "queue.h"

template <typename T>
Queue<T>::~Queue () {
  clear();
}

template <typename T>
Queue<T> & Queue<T>::clear() {
  Node<T> * temp = first;

  while (temp) {
    first = first->getPrev();
    delete temp;
    temp = first;
  }

  // reset values
  first = last = 0;
  size = 0;

  return *this;
}

template <typename T>
Queue<T> & Queue<T>::enqueue(const T & item) {
  // create new node holding the supplied data
  Node<T> * temp = new Node<T>(item);

  if (!isEmpty()) {
    Node<T> * oldLast = last;

    last = temp;
    oldLast->setPrev(last);
  } else {
    first = last = temp;
  }

  size++;
  return *this;
}

template <typename T>
Queue<T> & Queue<T>::dequeue(T & item) {
  if (!isEmpty()) {
    // stash data
    item = first->getData();
    Node<T> * oldFirst = first->getPrev();
    delete first;
    first = oldFirst;
    size--;
  } else {
    cout << "Queue is empty!" << endl;
  }

  return *this;
}

template <typename T>
const T & Queue<T>::firstEl() const {
  if (isEmpty()) {
    cout << "Queue is empty!" << endl;
  }

  return first->getData();
}

template <typename T>
void Queue<T>::Show() const {
  if (!isEmpty()) {
    Node<T> * temp = first;

    while (temp) {
      cout << "*************" << endl;

      cout << "Data: " << temp->getData() << endl;
      cout << "Location: " << temp << endl;
      cout << "Prev: " << temp->getPrev() << endl;

      cout << "*************" << endl;

      temp = temp->getPrev();
    }
  } else {
    cout << "Queue<T>::Show(): Queue is empty!" << endl;
  }
}
