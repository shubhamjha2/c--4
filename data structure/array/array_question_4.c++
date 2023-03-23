/*  https://www.youtube.com/watch?v=eJcBH0xvG98&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=23&t=122s&ab_channel=ApnaCollege  */

#include <iostream>
using namespace std;

int main()
{
    int mx;
    int n, i;
    int ans = 0;

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
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
           ans++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<"the total number of record breaking days are : "<<ans<<endl;

    return 0;
}
