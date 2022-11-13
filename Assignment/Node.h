#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
public:
    T element;     // Element contained in the node
    Node<T> *next; // Pointer to the next node

    Node(); // No-arg constructor

    Node(const T &e); // Constructor
};
#endif