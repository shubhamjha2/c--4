#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
  
    sort(v.begin(), v.end());
    cout<<*min_element(v.begin(), v.end())<<endl;
    cout<<*max_element(v.begin(), v.end())<<endl;
   for(auto x:v){
    cout<<x<<" ";
   }
    
 return 0;
}