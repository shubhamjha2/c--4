

                    //  *  *  *  *  *  *  * 
                    //  *  *  *  *  *  *  *
                    //  *     *           *
                    //  *     *           *
                    //  *  *  *  *  *  *  *

#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j;
    cin >> row >> col;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (j == 1 || j == col)
            {
                cout << " * ";
            }
            else if (i == 1 || i == row)
            {
                cout << " * ";
            }
            else if (i == row / 2)
            {
                cout << " * ";
            }
            else if (j == col / 2)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}