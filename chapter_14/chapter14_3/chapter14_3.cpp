//
// Brief: ADT Queue implementation with linked data structure (goes above and beyond what the book asks for)
// Topics: classes, containment, ADT, Queue, Node
//

#include "queue.cpp"
#include <iostream>
#include <string>

int main () {
  Queue<int> intQueue;
  int item;
  cout << "!! Adding some elements !!: " << endl << endl;
  intQueue.enqueue(2).enqueue(3).enqueue(4).enqueue(17);
  intQueue.Show();

  cout << "!! Popping some elements !!: " << endl << endl;
  intQueue.dequeue(item).dequeue(item);
  intQueue.Show();
  cout << "last item popped: " << item << endl;

  int first = intQueue.firstEl();
  cout << "First element is now: " << first << endl;

  cout << "!! Clearing queue !!" << endl;
  intQueue.clear();
  intQueue.Show();

  if (!intQueue.isEmpty()) {
    // this will seg fault without the isEmpty() check
    // I've tried different techniques to protect the user
    // from a seg fault if they call firstEl() on an empty
    // queue, but I can't seem to find the right approach :/
    int newFirst = intQueue.firstEl();
    cout << "First element is now: " << newFirst;
  }

  intQueue.enqueue(18823);
  intQueue.Show();

  Queue<std::string> stringQueue;
  stringQueue.enqueue("Hello There!");
  stringQueue.enqueue("I wonder if my queue can handle a queue of nodes :X -- Queue<Node *> nodeptrQueue");
  stringQueue.Show();

}
