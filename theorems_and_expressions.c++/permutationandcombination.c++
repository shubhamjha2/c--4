#include <iostream>
using namespace std;
int factorial(int n)
{
    int i;
    int facto = 1;
    for (i = 2; i <= n; i++)
    {
        facto *= i;
    }
    return facto;
}
int main()
{
    int n, r;
    cout << " enter the value of (n) and (r) :";
    cin >> n >> r;
    int ans = factorial(n)/(factorial(n-r)*factorial(r));
    
    cout << ans;

    return 0;
    
}