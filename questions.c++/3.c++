// power of a number square 2^3,a^b

#include<iostream>
#include<math.h>
using namespace std;

// int pow(int a,int b){
//     int i;
//     int ans=a;
//     for ( i = 1; i < 4; i++)
//     {
//         ans*=a;
//     }
//   return ans;     

// }
int main()
{
    int a,b;
    cout<<"enter the number :";
    cin>>a;
    cout<<"enter the power of the number :";
    cin>>b;

    cout<<"the answer is  "<<pow(a,b);
    return 0;
}
