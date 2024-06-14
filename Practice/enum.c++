#include <iostream>
using namespace std;

enum months{jan=30,feb,mar,apr,may,jun,jul,aug,sep=90};
int main()
{
    months m;
    m=jan;
    cout<<m<<endl;
    m=apr;
    cout<<m<<endl;
    m=sep;
    cout<<m<<endl;
    
 return 0;
}