
// In our childhood, we used to call it HCF (Highest Common Factor). GCD(gretest common divisior) of two numbers is the largest number that divides both of them.

#include<iostream>
using namespace std;

int main()
{
    int n1 ,n2;
    int  rem;
    cout<<"enter the number you want to find the gcd/HCF ";
    cin>>n1>>n2;
    while (n2!=0)
    {
        rem = n1 %n2;
        n1=n2;
        n2=rem;
    }
    
cout<<"the hcf of number is "<<n1;
    
    return 0;
}