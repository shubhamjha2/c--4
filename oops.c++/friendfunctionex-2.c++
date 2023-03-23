#include <iostream>
using namespace std;
class num
{
    int a;
    int b;

public:
    friend void sum();

    void setdata()
    {
        int n1, n2;
        cout << "enter the two no. ";
        cin >> n1;
        cin >> n2;
        a = n1;
        b = n2;
    }
    void getdata()
    {
        cout << " the sum of " << a << " , " << b << " is "<< a+b;
    }
};
void sum(num obj)
{
    obj.getdata();
}
int main()
{
    num obj;
    obj.setdata();
    sum(obj);

    return 0;
}