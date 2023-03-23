#include<iostream>
using namespace std;
class square{
    private:
    int side;
    public:
    void area(int a){
        side=a; 
        cout<<" Thearea of square with side "<<side<<" is : "<<side*side<<endl;  
    }
};
int main(){
    square obj;
    obj.area(6);
        
    return 0;
}