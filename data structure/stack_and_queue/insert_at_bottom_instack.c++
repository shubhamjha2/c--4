#include <iostream>
#include <stack>
using namespace std;

void insertbotton(stack<int> &s, int x)
{
    if(s.empty()){
        s.push(x);
        return;
    }
    int num=s.top();
    s.pop();
    insertbotton(s,x);
    s.push(num);
}
int main()
{
    int x;
    cin >> x;
    stack<int> s;

    // Push elements into the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    insertbotton(s, x);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;

}