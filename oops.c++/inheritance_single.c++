#include <iostream>
#include <stdlib.h>
using namespace std;

class base
{
    char name[20];
    int emp_no;

public:
    void getdata();
    void display();
};
class derived : protected base
{
    char sex[5];
    int salary;

public:
    void getdata1();
    void display1();
};
void base::getdata()
{
    cout << "enter the emp_no - ";
    cin >> emp_no;
    cout << "enter the name - ";
    cin >> name;
}
void base::display()
{

    cout << "emp_no - " << emp_no << endl;
    cout << "name - " << name << endl;
}
void derived::getdata1()
{

    getdata();
    cout << "enter the sex - ";
    cin >> sex;
    cout << "enter the salary - ";
    cin >> salary;
    cout << "\n";
}
void derived::display1()
{
    display();
    cout << "sex - " << sex << endl;
    cout << "salary - " << salary << endl;
    cout << "\n";
}

int main()
{
    derived obj;
    system("CLS");
    int n;
    cout << " 1. enter the employes \n 2. show the entry \n 3. exit \n";
    while (1)
    {
        cout << "choose an option : \n";
        cin >> n;
        switch (n)
        {
        case 1:
            obj.getdata1();
            break;
        case 2:
            obj.display1();
            break;
        case 3:
            exit(0);

        default:
            cout << "enter the correct option : $$$$";
            break;
        }
    }
    return 0;
}