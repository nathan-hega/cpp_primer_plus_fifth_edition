#ifndef _H_LIST
#define _H_LIST

// baking in item abstraction in an archaic way
typedef unsigned long Item;
typedef void (*functionParameter)(Item &);

const int MAX = 10;

class List {
  private:
    Item items[MAX];
    int top;
  public:
    List ();
    List (Item ar[], int size);
    bool add(Item item);
    bool isEmpty() const {return (top == 0) ? true : false;};
    bool isFull() const {return (top == (MAX)) ? true : false;};
    void each(functionParameter f);
    void show() const;
};

#endif