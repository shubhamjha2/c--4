
// in this program we use more than 1 function with same name but different parameters.....
//this process is known as function overloading.... 


#include<iostream>
using namespace std;
int volume(int l,int b ,int h){
    return (l * b * h);
}
double volume(int r,int h){
    return (3.14 * r * r * h);
}
int volume(int side){
    return (side * side * side);
}
int main()
{
    cout<<"volume of cuboide is "<<volume(2,3,4)<<endl;
    cout<<"volume of cube is "<<volume(2)<<endl;
    cout<<"volume of cylinder is "<<volume(3,4)<<endl;
    
    return 0;
}