#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int>v1{10,20,30,40,50,60,70};
    for (int i = 0; i <v1.size(); i++)
    {
        cout<<v1[i]<<endl;
    }
    
    // cout<<v1.capacity();   //tell about the capacity of a vector.
    // cout<<v1.size();
    return 0;
}