#include<iostream>
using namespace std;

int sum(int a,int b);//here we tell the the compiler that (age ye function ho skta hai) this is called function prototyping...
int main()
{
    int num1, num2;
    
cout<<"Enter the first number :- "<<endl;
cin>>num1;
cout<<"Enter the second number :- "<<endl;
cin>>num2;
cout<<"sum of these two number is :- "<<sum(num1,num2);
    return 0;
}

int sum(int a,int b){// Function is hera ...
    int c = a + b;
    return c;
}
