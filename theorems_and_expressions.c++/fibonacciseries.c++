#include <iostream>
using namespace std;
// void series(int n)
// {int i;
//     int term1 = 0;
//     int term2 = 1;
//     int nextterm;
//     for ( i = 0; i <n; i++)
//     {
//         cout<<term1<<" ";
//     nextterm = term1 +term2;
//     term1 = term2;
//     term2 = nextterm;
//     }
//     return ;
    
// }
// int main()
// {
//     int n;
//     cout << "enter the number of terms : ";
//     cin >> n;
//     series(n);

//     return 0;
// }

int main()
{
    int n;
    cout << "enter the number of terms : ";
    cin >> n;
    int term1 = 0;
    int term2 = 1;
    int nextterm;
    for ( int i = 0; i <n; i++)
    {
        cout<<term1<<" ";
    nextterm = term1 +term2;
    term1 = term2;
    term2 = nextterm;
    }

    return 0;
}