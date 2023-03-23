#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int ans,i=0;
    int num, bin;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The binary equivalent of " << num << " is ";
    while (num > 0)
    {
        bin = num % 2;
        ans=ans+(bin*pow(10,i));
        num /= 2;
        i++;
    }
    cout<<ans;
    return 0;
}