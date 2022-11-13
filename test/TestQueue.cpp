#include <iostream>
#include "Queue.h"

using namespace std;

struct Order
{
    int orderNo;
    string orderItem[3];
};

// function prototype
Order createOrder();

int main()
{
    Queue<Order> q1;

    // Order o2 = q1.dequeue();
    // cout << o2.orderNo;

    for (int i = 1; i <= 150 + 1; i++)
    {
        cout << i - 1 << endl;
        if (i % 4 == 0)
        {
            Order o1 = createOrder();
            q1.enqueue(o1);
        }
    }

    while (q1.getSize() != 0)
    {   
        Order o = q1.dequeue();
        cout << "Order No: " << o.orderNo << endl;
        for (int i = 0; i < 3; i++){
            cout << "Order Item: " << o.orderItem[i] << " ";
        }
        cout << endl;
    }

}

Order createOrder()
{
    int cheeseBurger = rand() % 2;
    int fries = rand() % 2;
    int coke = rand() % 2;

    Order o1;

    int randOrderNo = rand()%(99999999-10000000+1)+10000000;

    o1.orderNo = randOrderNo;

    int count = 0;

    if (cheeseBurger == 1)
    {
        o1.orderItem[count] = "Cheese Burger";
        count++;
    }
    if (fries == 1)
    {
        o1.orderItem[count] = "Fries";
        count++;
    }
    if (coke == 1)
    {
        o1.orderItem[count] = "Coke";
        count++;
    }

    return o1;
}
