#include <iostream>
#include <stack>

using namespace std;

void delete_middle_element(stack<int> &s)
{
    int n = s.size();
    int mid = n / 2;

    stack<int> temp;
    for (int i = 0; i < mid; i++)
    {
        temp.push(s.top());
        s.pop();
    }
    s.pop();
    while (!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
}

int main()
{
    stack<int> s;

    // Push elements into the stack
    s.push(1); 
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Delete the middle element
    delete_middle_element(s);

    // Print the stack
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
