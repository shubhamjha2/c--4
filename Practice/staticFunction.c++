#include <iostream>
using namespace std;
class math
{
public:
    static int sum(int a, int b)
    {
        return a + b;
    }
};
int main()
{
    int add = math::sum(19,7);
    cout << add << endl;
    return 0;
}