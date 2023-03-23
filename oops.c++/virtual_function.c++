#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void print()
    {
        cout << "base class"<<endl;
    }
};
class derived : public base
{
public:
      virtual void print()
    {
        cout << "derived class"<<endl;
    }
};
class derived1 : public derived
{
public:
      void print()
    {
        cout << "derived1 class"<<endl;
    }
};
int main()
{
    system("CLS");
    base *p ,*q,obj1;
    derived obj2;
    derived1 obj3;
    p = &obj2;
    q = &obj3;
    obj1.print(); // function overriding
    obj2.print();
    obj3.print();
    p->print();
    q->print();

    return 0;
}