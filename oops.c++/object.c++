#include<iostream>
// #include "class.c++"         //with the help of this we call class.c++ file 
using namespace std;
class student{
    int a, b;
public:
void setdata(int x, int y ){
a=x;
b=y;
}
void getdata(){
    cout<<"the value of (a) is "<<a<<" and value of (b) is "<<b;
}

};
int main()
{  student obj;
    obj.setdata(5,4);
    obj.getdata();
    return 0;
}