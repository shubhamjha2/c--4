#include <bits/stdc++.h>
using namespace std;

class person // this class is abstract class  because it have pure virtual function
             // we can  make pointer of this calss but can not make object of this calss
{
public:
    virtual void name() = 0;    // pure virtual function
    virtual void address() = 0; // pure virtual function
};
class student : public person
{
public:
    void name()
    {
        cout << "shubham" << endl;
    }
    void address()
    {
        cout << "computer block " << endl;
    }
    void rollno()
    {
        cout << "68" << endl;
    }
};
class faculty : public person
{
public:
    void name()
    {
        cout << "palak" << endl;
    }
    void address()
    {
        cout << "food block" << endl;
    }
    void salary()
    {
        cout << "6969" << endl;
    }
};
int main()
{
    system("CLS");
    student obj1;
    faculty obj2;
    person *p, *q;
    p = &obj1;
    q = &obj2;
    p->name();
    p->address();
    obj1.rollno();
    q->name();
    q->address();
    obj2.salary();
    return 0;
}