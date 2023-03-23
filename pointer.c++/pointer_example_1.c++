#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *aptr = &a;
    cout << *aptr << endl;
    cout << aptr << endl;
    *aptr = 29;
    cout << *aptr << endl;
    cout << aptr << endl;

    return 0;
}