#include<iostream>
using namespace std;
int power(int a,int b){
if (b==0)
{
return 1;
}
return a*power(a,b-1);

}

int main()
{
    int a,b;
    cout<<"enter the number : ";
    cin>>a;

    cout<<"enter the power of the number : ";
    cin>>b;

    cout<<"the answer of "<<a<<"^"<<b<<" is "<<power(a,b);
    return 0;
}