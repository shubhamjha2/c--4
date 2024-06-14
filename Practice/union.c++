#include <iostream>
using namespace std;
union helper{
    int x;
    float y;
    char z;
};
int main()
{
    helper h;
    h.x=10;
    cout<<h.x<<endl;
    h.y=10.5;
    cout<<h.y<<endl;
    h.z='a';
    cout<<h.z<<endl;
    cout<<h.x<<endl;
    cout<<h.y<<endl;
    cout<<h.z<<endl;
    
 return 0;
}