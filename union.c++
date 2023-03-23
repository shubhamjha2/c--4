#include<iostream>
using namespace std;
union transport 
{
    float train;
    int bus;
    char car;
};
struct node {
    
}

int main()

{
    union transport m1;
    m1.train=10;
    cout<< m1.train;
    return 0;
}