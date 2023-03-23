/*  https://www.youtube.com/watch?v=eJcBH0xvG98&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=23&t=122s&ab_channel=ApnaCollege  */

#include <iostream>
using namespace std;

int main()
{
    int mx;
    int n, i;

    cout << "enter the no. of index  ";
    cin >> n;
    int arr[n];
    cout << "enter the values of array  ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);
        cout << mx << " ";
    }

    return 0;
}