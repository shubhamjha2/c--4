#include<iostream>
using namespace std;


//**************************************************************************************************
class employee{

//access specifier
private:

//data member
int salary,pincode;
//access specifier
public:

//data member
int room, floor;


//member function
void setdata(int a, int b )// we can define [private/public] data member outside a class with the help of scope resulation(::) operator ...
{   
                                                                                                //as shown below in comment....
  salary=a;/*private member will only accessed by function */
  pincode=b;                                                                    //classs......
}
// void setdata(int a, int b );ygb 
void getdata()
{
    cout<<"the salary of employee is "<<salary<<endl;
    cout<<"the pincode  of employee is "<<pincode<<endl;
    cout<<"the room number of employee is "<<room<<endl;
    cout<<"the floor of employee is "<<floor<<endl;
}
};
//*****************************************************************************************************
// void employee:: setdata(int a, int b)                      
// {                                                   //here we defined...
//     salary=a;
//     pincode=b;
// }

int main()
{
    employee shubham;        //  here shubham is an object......
    shubham.room = 2;
    shubham.floor = 5;
    shubham.setdata(12000,110092);
    shubham.getdata();
    return 0;
}