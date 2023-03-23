#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int ans=1;
    for ( int i = n; i > 0; i--)
    {
        ans=ans*i;

    }
    cout<<"the factorial of "<<n<<" is "<<ans;
    return 0;
}