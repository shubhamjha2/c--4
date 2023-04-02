#include <iostream>
#include <stack>
using namespace std;
void insertbotton(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    insertbotton(s, x);
    s.push(num);
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {                   // base code                               //4
        return;                                                    //3 3
    }                                                              //2 2 2
    int temp = s.top(); // temp->4,3,2,1                           //1 1 1 1 null
    s.pop();

    reverse(s); //------------------------------------------------------^^^^

    insertbotton(s, temp); /// insrt at bottom   //temp->4,3,2,1
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
    reverse(s); // reverse function
    while (!s.empty())
    {
        cout << s.top() << " "; // print
        s.pop();
    }
    return 0;
}