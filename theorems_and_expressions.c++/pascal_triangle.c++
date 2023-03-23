/*1           0n0
  1 1         1n0 1n1
  1 2 1       2n0 2n1 2n2
  1 3 3 1     3n0 3n1 3n2 3n3
  1 4 6 4 1   4n0 4n1 4n2 4n3 4n4 */
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
    int n,i,j;
    cout << " enter the number  :";
    cin >> n ;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <=i; j++)
        {
            int ans = factorial(i) / (factorial(i - j) * factorial(j));
            cout << ans<<" ";

        }
        cout<<endl;
    }

    

    

    return 0;
}