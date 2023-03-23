#include<iostream>
using namespace std;
class sum{
int a,b;
public:
sum(void){
 cout<<"enter two no. ";
 cin>>a>>b;
}
void show(){
    cout<<"the sum is "<<a+b;
}

};
int main()
{sum obj;
obj.show();

    
    return 0;
}