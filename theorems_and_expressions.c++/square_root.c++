#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter the number whose square root you want to find " << endl;
    cin >> n;
    int srt = 1;
    int end = n;
    while (srt <= end)
    {

        int mid;
        int ans;
        mid = (srt + end) / 2;
        if (mid * mid == n)
        {
            cout << " the square root of " << n << " is " << mid;
            break;
        }
        else if (mid * mid > n)
        {
            end = mid - 1;
        }

        else
        {
            srt = mid + 1;
        }
    }

    return 0;
}