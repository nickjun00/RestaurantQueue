#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"

template<typename T>
class Queue
{
public:
    //
  Queue();
  void enqueue(const T& element);
  T dequeue();
  int getSize() const;
  
  private:
    LinkedList<T> list;
};
#endif