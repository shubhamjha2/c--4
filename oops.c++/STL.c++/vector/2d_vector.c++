#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;
    int value;
    cin >> r >> c;

    vector<vector<int>> matrix;
    for (int i = 0; i < r; i++)
    {
        vector<int> row;
        for (int j = 0; j < c; j++)
        {
            cin >> value;
            row.push_back(value);
        }
        matrix.push_back(row);
    }


    
    cout << "the 2d vector is \n\n"
         << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}