#include <iostream>
using namespace std;
class employee
{
    int id[10];
    int age[10];
    int count;

public:
    void counter()
    {
        count = 1;
    }
    void getdata();
    void display();
};
void employee ::getdata()
{
    cout << "Employee no. " << count << endl;
    cout << "Enter the employee id : ";
    cin >> id[count];
    cout << "Enter the employee age : ";
    cin >> age[count];
    count++;
}

void employee ::display()
{
    for (int i = 1; i < count; i++)
    {
        cout << "  Id of employee no."<<i<<" is : " << id[i] << " and age is  : " << age[i] << endl;
    }
}
int main()
{
    employee obj;
    obj.counter();
    obj.getdata();
    obj.getdata();
    obj.getdata();
    obj.display();

    return 0;
}