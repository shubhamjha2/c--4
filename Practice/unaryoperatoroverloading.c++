#include <iostream>
using namespace std;

class Adder
{
    int num;

public:
    Adder() : num(0) {} // Initialize num to 0 in the default constructor

    Adder(int a, int b)
    {
        num = a + b;
    }

    void print() const
    {
        cout << num << endl;
    }

    Adder& operator+=(const Adder& other) // Correctly implementing the += operator
    {
        this->num += other.num;
        return *this; // Return the updated object
    }
};

int main()
{
    Adder obj1(4, 5);  // obj1.num = 9
    Adder obj2(7,4);    // obj2.num = 11

    obj1.print(); // Outputs: 9
    obj2.print(); // Outputs: 11

    obj2 += obj1; // obj2.num = 11 + 9 = 20

    obj2.print(); // Outputs: 20

    return 0;
}
