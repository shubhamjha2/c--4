#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int n, i;
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for ( i = 0; i < n; i++)
    {
    sum = sum += arr[i];
    }
    cout<<" sum of all numbers are : "<<sum;
    

    return 0;
}