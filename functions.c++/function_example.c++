#include <iostream>
using namespace std;
int factorial(int m)
{
    int i;
    int ans=1;
     for ( i = m; i > 0; i--)
    {
        ans=ans*i;

    }
    return ans;
}

int main()
{
    int n, n1, i;
    cin >> n >> n1;
    cout<<" the factorial of "<<n<<" and "<<n1<<" is ";
    cout<< factorial(n)<<" ";
   cout<<factorial(n1);
    return 0;
}