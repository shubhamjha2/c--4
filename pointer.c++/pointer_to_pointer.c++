#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *p = &a;
    int **q = &p;
    cout << *q << endl;
    cout << **q << endl;

    return 0;
}