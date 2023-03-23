//     1 2 3
//     4 a 6
//     7 8 9

#include <iostream>
using namespace std;

int main()
{
    int n=3;
    
    int arr[n][n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            x++;
            if (x == 5)
            {
                cout << "a"<< " ";
            }
            else 
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}