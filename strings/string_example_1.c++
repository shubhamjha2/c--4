#include <iostream>
using namespace std;

int main()
{
    string jod = "prince";
    cout << "my name is :- " << jod << endl;
    jod.push_back('k');
    cout << "my name is :- " << jod << endl;
    jod.pop_back();
    cout << "my name is :- " << jod << endl;

    return 0;
}