#include <iostream>
using namespace std;

void count()
{
    static int a=10;
    cout << a << endl;
    a++;
}
int main()
{
    count();
    count();
    count();
    count();
    return 0;
}