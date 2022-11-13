#include "Node.h"
using namespace std;

template <typename T>
Node<T>::Node() // No-arg constructor
    {
        next = nullptr;
    }
    
template <typename T>
Node<T>::Node(const T &e) // Constructor
    {
        this->element = e;
        next = nullptr;
    }