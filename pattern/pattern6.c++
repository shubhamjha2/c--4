
// 1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15
//  16 17 18 19 20 21
//  22 23 24 25 26 27 28

#include <iostream>
using namespace std;

int main()
{
    int row, i, j;
    cin >> row;
    int count = 1;
    for (i = 0; i <= row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << " " << count;
            count++;
        }
        cout << endl;
    }

    return 0;
}