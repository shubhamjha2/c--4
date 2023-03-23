
#include<iostream>
using namespace std;
class square{
    public:
    int side;
    int area();
    int parameter(){
        return 4*side;
    }
};
int square ::area(){
 return side*side;
}
int main()
{
    square s1;
    s1.side=34;
    s1.area();
    s1.parameter();
    cout<<"side of the square is :"<<s1.side<<endl;
    cout<<"parameter of the square is :"<<s1.parameter()<<endl;
    cout<<"area of the square is :"<<s1.area()<<endl;

    return 0;
}