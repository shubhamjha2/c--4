#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    void print()
    {
        cout << "base class"<<endl;
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "derived class"<<endl;
    }
};
int main()
{
    system("CLS");
    derived obj1, obj2;
    obj1.print(); // function overriding
    obj2.base::print();
    return 0;
}