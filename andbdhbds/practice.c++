#include <iostream>
using namespace std;

int main()
{

  int t, n, x, y;
  int null =0;
  int arrA[x];
  int arrB[y];
  cin >> t;
  while (t--)
  {
    int streak = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> arrA[i];
    }
    for (int j = 0; j < n; j++)
    {
      cin >> arrB[j];
    }
    for (int k = 0; k < n; k++)
    {
      if ((arrA[k] > 0) && (arrB[k] > 0))
      {
        streak += 1;
      }
      else
      {
         streak = null;
      }
    }
    cout << streak << endl;
  }
  return 0;
}
