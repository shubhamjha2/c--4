

// Find the number of numbers in the interval [1,n] which are divisible by a or b.

#include <iostream>
using namespace std;

int main()
{
    int n, i,a,b;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    cout << "enter the last number ";
    cin >> n;
    cout << "enter the value of a and b ";
    cin>>a>>b;

    for (i = 1; i <=n; i++)
    {
        if (i%a == 0 && i%b == 0)
        {
            count1++;
        }
    }
    for (i = 1; i <=n; i++)
    {
        if (i % a== 0 )
        {
            count2++;
        }
    }
    for (i = 1; i <=n; i++)
    {
        if (i % b == 0)
        {
            count3++;
        }
    }
    count4=count2+count3-count1;
    cout << count4;
    
    return 0;
}