
// Subarray with given sum


#include<iostream>
using namespace std;

int main()
{
    int n;//size of array
    cin>>n;
    int x;
    cin>>x;
    
    int arr[n];
    int sum;
    for ( int i = 1; i < n; i++)
    {
        cin>>arr[i];
    }
    for ( int i = 1; i < n; i++)
    {
        sum=0;
        for (  int j = i; j < n; j++)
        {
            sum+=arr[j];
            
            if (sum==x)
            {
                cout<<i<<" "<<j<<" ";
            }
        }
        
    }
    
    
    return 0;
}