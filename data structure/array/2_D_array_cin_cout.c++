#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j;
    cout<<"enter the no. of row and coloum : ";
    cin >> n >> m;
    cout<<"enter the values of  2 D array  : "<<endl;
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"the 2 D array is  : "<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout<<arr[i][j]<< "    ";
        }
        cout<<"\n";

    }
    

    return 0;
}