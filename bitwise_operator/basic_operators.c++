#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int b = 50;
    cout << "a&b\t" << (a & b)<<endl;
    cout << "a|b\t" << (a | b)<<endl;
    cout << "~a\t" << (~a)<<endl;
    cout << "a^b\t" << (1^2^3^3^1000)<<endl;
    cout << "a^b\t" << (1003^1)<<endl;
    cout << "a^b\t" << (1003^2)<<endl;
    cout << "a^b\t" << (1003^3)<<endl;
    cout << "a^b\t" << (1003^4)<<endl;
    cout << "15<<2\t" << (15<<2)<<endl;
    cout << "15>>2\t" << (15>>2)<<endl;
    return 0;
}