#include <bits/stdc++.h>
using namespace std;

template <class t1 = int, class t2 = float>

class student
{
    t1 cls;
    t2 sec;

public:
    student(t1 x, t2 y)
    {
        cls = x;
        sec = y;
    }
    void showdata()
    {
        cout << cls << endl
             << sec;
    }
};
int main()
{
    system("CLS");

    student   <int >obj(6, 3.7);
    obj.showdata();

    return 0;
}