#include<iostream>
using namespace std;
void swap(int x,int y){
    int z;
    z=x;
    x=y;
    y=z;
}
int main()
{ 
    int a,b;
    cout<<"Enter a number (A) : ";
    cin>>a;
    cout<<"Enter another  number (B) : ";
    cin>>b;
    swap(a,b);      //<---  call by value
    cout<<"The value of (A) after swaping : "<<a<<" The value of (B) after swaping : "<<b<<endl;
    return 0;
}
