#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back((i * 10) + 1);
    }
    for (int i = 0; i < v1.capacity(); i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<"the element  at index 4 is "<<v1.at(4)<<endl;
    
    cout<<"after clr ";
    v1.clear();
    for (int i = 0; i < v1.capacity(); i++)
    {
        cout<<v1[i]<<endl;
    }

    cout<<v1.capacity()<<endl;
    cout<<v1.size();


    return 0;
}