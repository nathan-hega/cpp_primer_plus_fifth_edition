template <typename T>
class Node {
  private:
    T data;
    Node<T> * prev;
  public:
    Node (const T & d) : data(d), prev(0) {}
    void setData(T d) { data = d; }
    T & getData() { return data; }
    void setPrev(Node<T> * p) { prev = p; }
    Node<T> * getPrev() { return prev; }
};
