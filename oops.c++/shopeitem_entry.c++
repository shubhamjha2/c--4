#include <iostream>
#include <string>

using namespace std;

class mart
{
    int itemid[20];
    string itemname[20];

public:
    void setdata()
    {
        int n;
        cout << "enter the no. of item you want to enter \n:";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << "enter for item no. \n" << i << endl;
            cout << "enter for item id. \n" << endl;
            cin >> itemid[i];
            cout << "enter for item name \n" << endl;
            cin >> itemname[i];
        }
    }
    void getdata()
    {
        int n;
        cout << "enter the no. of item you want to fetch \n:";
        cin >> n;

        for (int i = 1; i < n; i++)
        {
            cout << "item no. " << i << endl;
            cout << "item id." <<itemid[i]<< endl;
            cout << "item name "<<itemname[i]<< endl;
        }
    }
};

int main()
{
    int choice;
    cout << "1. Enter the data : \n" << endl;
    cout << "2. Fetch the data : \n" << endl;
    cout << "0. exit : \n" << endl;
    mart obj;
    while (1)
    {
    cout << "choose the option you want to do \n: " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        obj.setdata();
        break;
    case 2:
        obj.getdata();
        break;
    case 0:
       exit(0);
        break;
        default:
        cout<<"wrong entry \n : "<<endl;
        break;
    
    }
    }
    

    return 0;
}