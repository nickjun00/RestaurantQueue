#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue<int> q1;

    q1.enqueue(1);
    q1.enqueue(5);
    q1.enqueue(3);
    
    // while (q1.getSize()!=0) {
    //     cout << '\t' << q1.dequeue();
    //     //q1.dequeue();
    // }
    cout << endl;
}