#include <bits\stdc++.h>
using namespace std;

int main()
{
    vector<int>v={4,3,7,1,5};
    for(int i= 1; i<v.size(); i++){
        int temp=v[i];
        int j=i;
        while(j>0&& v[j-1]>temp){
            v[j]=v[j-1];   //mostly mistake d0ne here
            j--;
        }
        v[j]=temp;
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    
 return 0;
}