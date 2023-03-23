#include <bits/stdc++.h>
using namespace std;
int  showdata(int arr[3][3])
{
   

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout <<arr[i][j];
        }
        cout << endl;
    }
}
int main()
{
    system("CLS");
    cout << "\t\t\t\t\t\t- WELCOME  TO  MY  TIK  TAK  GAME -\n\n";
    int a = 3, b = 3;
    int x, y;
    string red, blue;
    // cout << "enter the name of player RED : ";
    // cin >> red;
    // cout << endl;
    // cout << "enter the name of player BLUE : ";
    // cin >> blue;
    cout << endl;
    int arr[a][b];
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout << "  .  ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "enter the place where you want to place (0)";
    cin >> x >> y;
    arr[x][y] = 0;
    showdata(arr);
    cout << "enter the place where you want to place (x)";
    cin >> x >> y;
    arr[x][y] = x;
    showdata(arr);

    return 0;
}