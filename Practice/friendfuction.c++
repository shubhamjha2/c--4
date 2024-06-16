#include <iostream>
using namespace std;
class container
{
    int a = 10;
    int b = 20;
public:
    friend void fun(container &con);
};
void fun(container &con)
{
    con.a = 100;
    con.b = 200;
    cout << "a: " << con.a << "b: " << con.b << endl;
}
int main()
{
    container c;
    fun(c);
    return 0;
}



// #include <iostream>
// using namespace std;
// class  number{
// int a=10;
// int b=140;
// friend int sum( number &obj);
// };
// int sum( number &obj){
//     return obj.a + obj.b;
// }
// int main()
// {
//     number obj;
//     cout<<sum(obj)<<endl;
   
    
//  return 0;
// }