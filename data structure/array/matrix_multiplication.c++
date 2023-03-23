#include<iostream>
using namespace std;

int main()
{
    int m,m1,n,n1,i,j;
    cout<<"enter the no. of row and coloumn of firt matrix : ";
    cin>>m>>m1;
    int arr[m][m1];
    cout<<"enter the elements of row and coloumn of firt matrix : ";
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m1; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    cout<<"enter the no. of row and coloumn of second matrix : ";
    cin>>n>>n1;
         
    int arr1[n][n1];
    cout<<"enter the elements of row and coloumn of firt matrix : ";
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n1; j++)
        {
            cin>>arr1[i][j];
        }
        
    }

    return 0;
}