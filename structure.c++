#include<iostream>
using namespace std;

struct student 
{
 int rollno;
 string name;
 float fee;

};


int main()
{
    struct  student sam;
   
    cout<< "The name of student is:- "<<(sam.name ="sam")<<endl;
    cout<< "The roll no of student is:- "<<(sam.rollno =1234) <<endl;
    cout<< "The fee of student is:- "<<(sam.fee = 1000)<<endl;

    return 0;
}