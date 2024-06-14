#include <iostream>
using namespace std;

int main()
{
    int i=0;
    for (int  i = 0; i < 13; i++)
    {
       switch (i)
       {
       case 0:
        i+=6;
       case 1:
        i+=1;
       case 5:
        i+=3
       default:
       i+=2;
        break;
       }
       printf("%d",i)
    }
    
    
 return 0;
}