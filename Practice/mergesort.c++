#include <bits\stdc++.h>
using namespace std;


void merge(vector<int>&v,int s,int mid,int e){
    vector<int>v1(v.begin()+s,v.begin()+mid+1);
    vector<int>v2(v.begin()+mid+1,v.begin()+e+1);
    int i=0,j=0,k=s;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            v[k]=v1[i];
            i++;
        }
        else{
            v[k]=v2[j];
            j++;
        }
        k++;
    }
    while(i!=v1.size()){
        v[k]=v1[i];
        i++;
        k++;
    }
    while(j!=v2.size()){
        v[k]=v2[j];
        j++;
        k++;
    }
}
void mergesort(vector<int>&v,int s,int e){
    int mid =s+((e-s)/2);
    if(s<e){
        mergesort(v,s,mid);
        mergesort(v,mid+1,e);
        merge(v,s,mid,e);
    }
}
int main()
{
    vector<int>v={4,3,7,1,5};


    
    mergesort(v,0,v.size()-1);
    for(auto x:v){
        cout<<x<<" ";
    }
    
 return 0;
}