

                // 1
                // 22
                // 333
                // 4444
                // 55555
                // 666666


#include<iostream>
using namespace std;

int main()
{
    int row ,i,j;
    cin>>row;
    for ( i = 0; i <=row; i++)
    {
        for ( j = 1; j <=i; j++)
        {
        
                cout<<i;
        }
        cout<<endl;
    }
    
    
    return 0;
}