#include <iostream>
using namespace std;

int main()
{
    int n, i,j;
    
    cout << "enter the no. of arrays  : ";
    cin >> n;
    int arr[n];
    cout << "enter the values of array  : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (current < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout << " the shorted arry is  : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}