#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the numbers of array    ";
    cin >> n;
    int arr[n], i, j, temp;
    cout << "enter the elements  of array    ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "the shorted array is   ";
    for (i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}