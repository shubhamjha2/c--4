#include<iostream>
using namespace std;

typedef struct student 
{
 int rollno;
 
 float fee;

}sex;


int main()
{
  sex sam;
  sex dinesh;
  sex ramesh;
    sam.rollno =156784;
    sam.fee = 1000;
    dinesh.rollno =123064;
    dinesh.fee = 1000;
    ramesh.rollno =167234;
    ramesh.fee = 1000;
    

    cout<< "The roll no of student is:- "<<sam.rollno<<endl;
    cout<< "The fee of student is:- "<<sam.fee<<endl;
   cout<< "The roll no of student is:- "<<dinesh.rollno<<endl;
    cout<< "The fee of student is:- "<<dinesh.fee<<endl;  
     cout<< "The roll no of student is:- "<<ramesh.rollno<<endl;
    cout<< "The fee of student is:- "<<ramesh.fee<<endl;
    return 0;
}