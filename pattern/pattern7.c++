

#include <iostream>
using namespace std;

int main()
{
    int row, i = 0;
    cin >> row;

    while (i < row)
    {
        int count = i;
        int j = 0;
        while (j <= i)
        {
            if (count == 0)
            {
                cout << "1";
                break;
            }
            cout << count++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}