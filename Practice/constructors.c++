#include <iostream>
using namespace std;
class helper
{
    int a, b, c;
    public:
    helper(){
        cout<<"default constroutor called"<<endl;
    }
    helper(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    helper(int x, int y){
        a = x;
        b = y;
        cout<<a<<" "<<b<<endl;
    }
    helper(helper & cc){
        a = cc.a;
        b = cc.b;
        c = cc.c;
        cout<<"copying "<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    ~helper(){
        cout<<"destructor called"<<endl;
    }
};
int main()
{
    helper obj1,obj2(3,4),obj3(33,55,66),obj10(obj1);
    cout<<"hello"<<endl;


    return 0;
}