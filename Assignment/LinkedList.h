#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

template<typename T>
class LinkedList
{
public:
  LinkedList(); // No-arg constructor
  LinkedList(const LinkedList<T>& list); // Copy constructor
  //virtual ~LinkedList(); // Destructor
  LinkedList<T>& operator=(const LinkedList<T>& list);
  void addFirst(const T& e);
  void addLast(const T& e);
  T& getFirst() const;
  T& getLast() const;
  T removeFirst();
  T removeLast();
  void add(const T& e);
  void add(int index, const T& e);
  void clear();
  bool contains(const T& e) const;
  T& get(int index) const;
  int indexOf(const T& e) const;
  bool isEmpty() const;
  int lastIndexOf(const T& e) const;
  void remove(const T& e);
  int getSize() const;
  T removeAt(int index);
  T& set(int index, const T& e);

  // Iterator<T> begin() const
  // {
  //   return Iterator<T>(head);
  // }

  // Iterator<T> end() const
  // {
  //   return Iterator<T>(tail->next);
  // }

private:
  Node<T>* head;
  Node<T>* tail;
  int size;
};
// The functions remove(const T& e), lastIndexOf(const T& e),
// contains(const T& e), and set(int index, const T& e) are
// left as an exercise

#endif