#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"                     "<<endl;
    cout<<"                     "<<endl;
    cout<<"********** let's start the game ************"<<endl;
    cout<<"                     "<<endl;
    cout<<"                     "<<endl;
    cout<<"choose a number -->   1 ,  2  ,  3  ,  4  ,  5  "<<endl;
    cin>>a;
    switch(a)
    {
        case 1:
        cout<<"you are kind ";
        break;
        case 2:
        cout<<"you are trustful";
        break;
        case 3:
        cout<<"you are soft-hearted";
        break;
        case 4:
        cout<<"you are annoying";
        break;
        case 5:
        cout<<"you are helpful ";
        break;

        default:
        cout<<"please choose correctly";
        break;
    }
   return 0;
}