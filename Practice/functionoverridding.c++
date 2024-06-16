#include <iostream>
using namespace std;

class car
{
public:
    void shiftgare()
    {
        cout << "speed limit is 100km/h" << endl;
    }
};
class supercar : public car
{
public:
    void shiftgare()                                         //function overrides
    {
        cout << "speed limit is 250km/h" << endl;  
        car::shiftgare();  //calling base class function using scope resolution operator
    }
};
int main()
{
    supercar obj;
    obj.shiftgare();

    return 0;
}