#include<iostream>
using namespace std;
// here we declear a function named sum which performs the function of summation(sum)
int sum(int a,int b){
    int c= a + b;
    return c;
}
int main()
{
    int num1,num2;
    cout<<"Enter the first number :- " <<endl;
    cin>>num1;
    cout<<"Enter the second number :- " <<endl;
    cin>>num2;
    cout<<"sum of these two numbers is : " <<sum(num1,num2)<<endl;//00 here we use function
    return 0;
}