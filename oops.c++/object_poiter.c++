#include <bits/stdc++.h>
using namespace std;
class box {
        int l,b,h; 
        public:
        void getdata(int x,int y,int z){
        l=x;
        b=y;
        h=z;
        }
        void showdata(){
      cout<<" l "<<l<<" b "<<b<< " h "<<h;
        }
    };
int main()
{
   system("CLS");
    box obj,*p;
    p=&obj;
    p-> getdata(4,6,7);
    p-> showdata();//object pointer{(->) instead of(.)}

    return 0;
}