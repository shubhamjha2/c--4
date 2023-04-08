#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int front, rear, size;
    int *arr;

public:
    Queue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[size];
    }

    void enqueue(int x)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = x;
    }

    int dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int x = arr[front];
        front++;
        return x;
    }

    bool isEmpty()
    {
        if (front == -1 || front > rear)
        {
            return true;
        }
        return false;
    }

    int getFront()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
};
int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Front element is: " << q.getFront() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front element is: " << q.getFront() << endl;

    return 0;
}
