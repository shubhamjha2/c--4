#include <bits/stdc++.h>
using namespace std;

template <class T>//template

class sum
{
public:
    T sum;
    T setdata(T x, T y)
    {
        sum = x + y;
    }
    T showdata()
    {
        cout << "the sum of numbers is " << sum;
    }
};
int main()
{
    system("CLS");

    // sum <int>obj;
    sum <float>obj;
    obj.setdata(2.5, 4.39);
    obj.showdata();

    return 0;
}