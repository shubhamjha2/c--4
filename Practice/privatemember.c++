#include <iostream>
using namespace std;

class calculator
{
    int a = 9;
    int b = 7;

public:
    int c = 10;
    void setdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void printsum()
    {
        cout << a + b + c << endl;
    }
};
int main()
{
    calculator obj;
    obj.c = 16;
    obj.setdata(12, 55);
    obj.printsum();

    return 0;
}