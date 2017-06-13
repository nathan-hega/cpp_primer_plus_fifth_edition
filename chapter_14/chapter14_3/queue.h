#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

template <typename T>
class Queue {
  private:
    Node<T> * first;
    Node<T> * last;
    int size;
  public:
    // constructors, destructors, operators, etc...
    Queue () : first(0), last(0), size(0) {}
    Queue (Queue<T> & q);
    ~Queue ();
    //friend ostream & operator<<(ostream & os, const Queue<T> & q);
    void Show() const;
    Queue<T> & operator=(const Queue<T> & q);

    // queue
    Queue<T> & clear();
    bool isEmpty() const { return size == 0; }
    Queue<T> & enqueue(const T & item);
    Queue<T> & dequeue(T & item);
    const T & firstEl() const;
    int getSize () const { return size; }
};

#endif
