#include <iostream>
using namespace std;
// there is Problem in overridding thats why we are using virtual functions
//problem is the if we don't use virtual function parent f1 will run   but as f1 overridded child f1 shold run
class A
{
    public:
    virtual void  f1()
    {
        cout << "this is parent class" << endl;
    }
};
class B : public A
{
    public:
    void f1() // overriding
    {
        cout << "this is child class" << endl;
    }
};
int main()
{
    A  *p;
    B obj;
    p = &obj;
    p->f1();

    return 0;
}