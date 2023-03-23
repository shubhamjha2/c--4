#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int>v;
    
    cout<<"enter the value of vector "<<endl;
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    cout<<"the elements of vector is "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    vector <int>::iterator it;
    it=v.begin();
    v.insert(it+2,200);
    
    cout<<"insertion at index 2 "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    
    
    return 0;
}