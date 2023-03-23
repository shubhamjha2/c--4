#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j;
    int temp;
    cout << "enter the no. of row and col : ";
    cin >> n >> m;
    cout << "enter the elements of matrix : ";
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j < m; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout << " the tanspose of matrix is : ";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}
