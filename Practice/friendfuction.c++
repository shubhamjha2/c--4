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