#include <iostream>
using namespace std;

class Stack
{
private:
    int *items;   // Pointer to dynamic array
    int capacity; // Maximum number of elements the stack can hold
    int topIndex; // Index of the top element in the stack

public:
    // Constructor
    Stack(int capacity = 10)
    {
        this->capacity = capacity;
        items = new int[capacity];
        topIndex = -1; // Stack is initially empty
    }

    // Destructor
    ~Stack()
    {
        delete[] items;
    }

    // Returns true if the stack is empty
    bool isEmpty()
    {
        return topIndex == -1;
    }

    // Returns true if the stack is full
    bool isFull()
    {
        return topIndex == capacity - 1;
    }

    // Adds an element to the top of the stack
    void push(int item)
    {
        if (isFull())
        {
            cout << "Stack overflow\n";
            return;
        }
        items[++topIndex] = item;
    }

    // Removes and returns the element at the top of the stack
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow\n";
            return -1;
        }
        return items[topIndex--];
    }

    // Returns the element at the top of the stack without removing it
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return items[topIndex];
    }

    // Returns the number of elements in the stack
    int size()
    {
        return topIndex + 1;
    }
};
#include <iostream>
using namespace std;

int main()
{
    // Create a stack with a capacity of 5
    Stack s(5);

    // Push some elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // Try pushing one more element onto the full stack
    s.push(60); // Output: Stack overflow

    // Pop some elements off the stack
    cout << s.pop() << endl; // Output: 50
    cout << s.pop() << endl; // Output: 40
    cout << s.pop() << endl; // Output: 30

    // Peek at the top element of the stack
    cout << s.peek() << endl; // Output: 20

    // Pop the remaining elements off the stack
    cout << s.pop() << endl; // Output: 20
    cout << s.pop() << endl; // Output: 10

    // Try popping an element off an empty stack
    s.pop(); // Output: Stack underflow

    return 0;
}
