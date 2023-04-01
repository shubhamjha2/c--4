#include <iostream>
#include <stack>
using namespace std;
void print(stack<int>s1){
    stack<int>temp=s1;
    while (!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    
}
int main()
{

    stack<int>s1;
    s1.push(10);
    s1.push(11);
    s1.push(12);
    s1.push(13);
    s1.push(14);
    s1.push(15);
    s1.push(16);
    s1.push(17);
    cout<<"stack:-  "<<endl;
    print(s1);
    
 return 0;
}