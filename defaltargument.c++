
#include<iostream>
using namespace std;
float employee(int sallary,float tax=1.23){
    int c = sallary* tax;      //^ ----<<--< ------ hearv is defalt argument......
    return c;
}
int main()
{int sallary = 10000;

    cout<<"the sallary of employee is "<<sallary<<" ,total sallary after tax is "<<employee(sallary)<<endl;//heare we does't give the value of tax, hence the function usesesn the defalt argument

    cout<<"the sallary of employee is "<<sallary<<" ,total sallary after adding canteen charge  is "<<employee(sallary,23.56)<<endl;
    
    return 0;
}