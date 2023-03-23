#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {1, 45, 67, 23, 68, 34, 25, 78};
    cout << "the list is " << endl;
    list<int>::iterator it = l.begin();
    while (it != l.end())
    {
        cout << *it << "\t";
        it++;
    }
    cout << "\n\n";

    l.sort();
    cout << "after sorting " << endl;
    list<int>::iterator ti = l.begin();
    while (ti != l.end())
    {
        cout <<*ti << "\t";
        ti++;
    }
    cout << "\n\n";

    l.reverse();
    cout << "after reversing " << endl;
    list<int>::iterator si = l.begin();
    while (si != l.end())
    {
        cout << *si << "\t";
        si++;
    }
    cout << "\n\n";

    l.remove(25);
    cout << "after removing 25 " << endl;
    list<int>::iterator di = l.begin();
    while (di != l.end())
    {
        cout << *di << "\t";
        di++;
    }

    return 0;
}