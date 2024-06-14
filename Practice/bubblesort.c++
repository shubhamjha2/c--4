#include <bits\stdc++.h>
using namespace std;

int main()
{
    vector<int> num = {1, 35, 6, 4, 43, 68, 3, 71, 11};

    for (int i = 0; i < num.size() - 1; i++)
    {
        for(int j=1;j<num.size();j++){
            if(num[j]<num[j-1]){
                swap(num[j],num[j-1]);
            }
        }
    }

    for (auto x : num)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}