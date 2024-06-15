#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << a << "+" << b << "i" << endl;
    }
    complex operator+(complex & obj){
        complex temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }
};
int main()
{
    complex c1(2, 3), c2(73, 31), c3;
    c1.getdata();
    c2.getdata();
    c3 = c1 + c2;
    c3.getdata();
    // c3=c1.sum(c2);

    return 0;
}