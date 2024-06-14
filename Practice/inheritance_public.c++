#include <iostream>
using namespace std;
class A
{
private:
    void f1()
    {
        cout << "f1" << endl;
    }

protected:
    int fff = 10;
    void f3()
    {
        cout << "f3" << endl;
    }

public:
    void f2()
    {
        cout << "f2" << endl;
    }
};
class B : public A
{
private:
    void f4()
    {
        cout << "f4" << endl;
    }

protected:
    void f5()
    {

        cout << "f5" << endl;
    }

public:
    void f6()
    {
        f3();
        fff=70;
        cout<<"the proted attribute "<<fff<<endl;
        cout << "f6" << endl;
    }
};
int main()
{
    B obj;
    // obj.f1();//errorbecause it is private can acess outside A class;
    // obj.f3(); //error because it is protected  for class B also cannot  acess outside
    // obj.f4(); //error because it isprivate can acess outside
    // obj.f5();
    obj.f6();
    obj.f2();

    return 0;
}