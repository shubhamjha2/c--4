// Q.  we have to sum thr arguments of two objects

// ex- obj1(3,5)  &  obj2(4,6)    =      obj3(7,11)
#include <bits/stdc++.h>
using namespace std;
class sum
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void showdata()
    {
        cout << "A = " << a << " B = " << b << endl;
    }
    sum operator+(sum obj) // operator overloaded..
    {
        sum temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return (temp);
    }
    sum operator-(sum obj) // operator overloaded..
    {
        sum temp;
        temp.a = a - obj.a;
        temp.b = b - obj.b;
        return (temp);
    }
};
int main()
{
    // system("CLS");

    sum o1, o2, o3;
    o1.setdata(3 , 4);
    o2.setdata(7 , 6);
    o3.setdata(4 , 5);
    o1.showdata();
    o2.showdata();
    cout << "----------" << endl;
    o3 = o1 + o2; // operator
    o3.showdata();
    o1=o2-o3;
    o1.showdata();

    return 0;
}