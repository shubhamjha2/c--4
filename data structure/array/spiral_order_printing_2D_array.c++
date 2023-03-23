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

    int rowstart = 0, rowend = n - 1, colstart = 0, colend = m - 1;
    while (rowstart <= rowend && colstart <= colend)
    {
        for (i = colstart; i <= colend; i++)
        {
            cout << arr[rowstart][i] << "  ";
        }
        rowstart++;

        for (i = rowstart; i <= rowend; i++)
        {
            cout << arr[i][colend] << "  ";
        }
        colend--;
        for (i = colend; i >= colstart; i--)
        {
            cout << arr[rowend][i] << "  ";
        }
        rowend--;

        for (i = rowend; i >= rowstart; i--)
        {
            cout << arr[i][colstart] << "  ";
        }
        colstart++;
    }

    return 0;
}