#include<iostream>
using namespace std;
class num{
    int a,b;
    public:
    num(){
        a=2;
        b=5;
    }
    num(num &obj){
        a=obj.a;
        b=4;
    }
    void print(){
        cout<<"the value of the addition of a and b is : "<<a+b;
    }
};
int main()
{
    num obj;
    obj.print();
    num obj2(obj);
    obj2.print();
    
    return 0;
}