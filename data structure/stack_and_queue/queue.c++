#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int>s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    while (!s.empty())
    {
       cout<<s.front()<<" ";
        s.pop();
    }
 return 0;
}