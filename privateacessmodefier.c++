#include <iostream>
using namespace std;
class square
{
    protected:
    int side = 8;
};

class outputer : public square
{
    public:
    void area()
    {
        cout << " Thearea of square with side " << side << " is : " << side * side << endl;
    }
};
int main()
{
    outputer obj;
    obj.area();
    // cout<<obj.side;

    return 0;
}