// count the lettes of an character array


#include <iostream>
using namespace std;

int main()
{
    int count=0;
    char name[20];
    cin>>name;
    for (int i = 0;name[i] !='/0'; i++)
    {
        count++;
    }
    cout<<"total no. of char is ";
 return count;
}