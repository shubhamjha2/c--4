#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j, x;
    cout << "enter the no of rows and coloumn  : ";
    cin >> n >> m;
    cout << "enter the values of array  : ";
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "enter the element you want to find in array  : ";
    cin >> x;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << " yes, the element that you want to find is present in this array at index :  "
                     << "row = " << i << "col = " << j;
            }
        }
    }

    return 0;
}