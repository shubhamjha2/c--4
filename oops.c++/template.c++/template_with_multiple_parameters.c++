#include <bits/stdc++.h>
using namespace std;

template<class t1,class t2>

class  student{
t1 cls;
t2 sec;
public:
student(t1 x ,t2 y){
 cls=x;
 sec=y;
}
void showdata(){
    cout<<cls<<endl<<sec;
}

};
int main()
{
   system("CLS");
   

   student <int,char>obj(6,3);
   obj.showdata();
    
    return 0;
}