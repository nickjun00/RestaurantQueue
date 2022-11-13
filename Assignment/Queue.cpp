#include "Queue.h"

template<typename T>
Queue<T>::Queue()
{
}
  
template<typename T>
void Queue<T>::enqueue(const T& element)
{
  list.addLast(element);
}
  
template<typename T>
T Queue<T>::dequeue() 
{
  return list.removeFirst();
}
  
template<typename T>
int Queue<T>::getSize() const
{
  return list.getSize();
}