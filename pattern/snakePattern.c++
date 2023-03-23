#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool a = true;
    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i % 2 != 0)
                {
                    cout << "#";
                }
                else
                {
                    if (a)
                    {
                        for (int k = 1; k < m; k++)
                        {
                            cout << ".";
                        }
                        cout << "#";
                        a = false;
                    }
                    else
                    {
                        cout << "#";
                        for (int k = 2; k <= m; k++)
                        {
                            cout << ".";
                        }
                        a = true;
                    }
                    break;
                }
            }
            cout << endl;
        }
    }

    return 0;
}