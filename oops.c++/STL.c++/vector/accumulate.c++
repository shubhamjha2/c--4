#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum: " << sum << endl;
    return 0;
}
