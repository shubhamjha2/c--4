#include <iostream>
using namespace std;
class B;
class A{
    int a=30;
    friend int sum(A &a,B &b);
};
class B{
    int b=40;
    friend int sum(A &obj1,B &obj2);
};
int sum(A &obj1,B &obj2){
    return obj1.a+obj2.b;
}
int main()
{
    A obj1;
    B obj2;
    cout<<sum(obj1,obj2)<<endl;
   
    
 return 0;
}


// friend functio can  help to access private members of 2 different clss that is only possible with friends function