/*  https://www.youtube.com/watch?v=eJcBH0xvG98&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=23&t=122s&ab_channel=ApnaCollege  */

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n, i, j;

    cout << "enter the no. of index  ";
    cin >> n;
    int arr[n];
    cout << "enter the values of array  ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"the sum of all sub arrays are   : "<<endl;
    for (i = 0; i < n; i++)
    {
        sum =0;
        for (j = i; j < n; j++)
        {
            sum+= arr[j];
            cout<<sum<<"  ";
        }
        cout<<"  "<<endl;
        
    }

    return 0;
}