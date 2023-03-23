#include <iostream>
using namespace std;

int main()
{
    int n, i, key;
    int count = 1;
    int temp;
    cout << "total number of array : ";
    cin >> n;
    cout << " values  of array : ";
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (count < n)
    {
        for (i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++;
    }
    for (i = 0; i < n; i++)
    {
        cout << "shorted arry is " << arr[i];
    }

    return 0;
}