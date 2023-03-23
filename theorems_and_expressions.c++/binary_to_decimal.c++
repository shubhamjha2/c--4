#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int bin, dec,i=0,remainder;
    cout<<"enter the binary number ";
    cin >> bin;
    int sum=bin;
    while (sum > 0)
    {
        
        remainder = sum % 10;
        dec=dec+(remainder*pow(2,i));
        i++;
        sum =sum /10;
    }
    cout<<"the decimal conversion of "<<bin<< " is "<<dec;

    return 0;
}