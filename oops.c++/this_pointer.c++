#include <bits/stdc++.h>
using namespace std;
class box
{
    int l, b, h;

public:
    void getdata(int l, int b, int h)
    {
        this->l = l; // this use krne se instance membar function kai local variable ko point nahi krta and
        this->b = b; // bahr wale ko point krta hai
        this->h = h;
    }
    void showdata()
    {
        cout << " l " << l << " b " << b << " h " << h;
    }
};
int main()
{
    system("CLS");
    box obj, *p;
    p = &obj;
    p->getdata(4, 6, 7);
    p->showdata(); // object pointer{(->) instead of(.)}

    return 0;
}