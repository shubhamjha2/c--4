// A A A A
// B B B B
// C C C C
// D D D D
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char count='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<count<<" ";
        }
        count++;
        cout<<"\n";
        
    }
        
    return 0;
}