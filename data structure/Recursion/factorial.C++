//recursion


#include<iostream>
using namespace std;

int factorial(int z){

    if (z<=1)
    {
   return 1;  //this is base case and this is important in recursion(where the program get end)
    }

    return z*factorial(z-1);  
                 //   ^-------<----- recursive function
      
    // 4 * factorial( 4-1 )
    // 4 * 3 * factorial( 3-1 )
    // 4* 3 * 2 * factorial( 2-1 )
    // 4 * 3 * 2 * 1
    
}
int main()
{int a;
    cout<<"Enter the number : "<<endl;
     cin>>a;
     cout<<"Factorial of "<<a<<" is "<<factorial(a);
    return 0;
}