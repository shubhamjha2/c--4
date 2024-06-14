#include <bits\stdc++.h>
using namespace std;
int helper(vector<int> &v, int s, int e)
{
    int pivot = v[e];
    int i = s;
    for (int j = s; j < e; j++)
    {
        if (v[j] <= pivot)
        {
            swap(v[i], v[j]);
            i++;
        }
    }
    swap(v[i], v[e]);
    return i++;
}
void quicksort(vector<int> &v, int s, int e)
{
    if (s < e)
    {
        int pidx = helper(v, s, e);
        quicksort(v, s, pidx - 1);
        quicksort(v, pidx + 1, e);
    }
}
int main()
{
    vector<int> v = {4, 3, 7, 1, 5};
    quicksort(v, 0, v.size() - 1);
    for (auto X : v)
    {
        cout << X << " ";
    }

    return 0;
}