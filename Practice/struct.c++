#include <iostream>
using namespace std;
struct employee
{
    int id;
    string name;
    float salary;
};
int main()
{
    employee e1;
    e1.id = 101;
    e1.name = "shubhamjha";
    e1.salary = 10000;
    cout << e1.id << endl;
    cout << e1.name << endl;
    cout << e1.salary << endl;

    return 0;
}