#include <iostream>
using namespace std;
class A{
int a=10;
int b=30;
friend class B;
};
class B{
    public:
    int  sum( A &aa){
        return  aa.a+aa.b;
    }
};
int main()
{
    A aa;
    B bb;
    int output =bb.sum(aa);
    cout<<output<<endl;

    
 return 0;
}