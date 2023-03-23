// reverse a string with the help of string
#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

// int main() {
 
//   string greeting = "shubham";
//   int len = greeting.length();
//   int n=len-1;
//   for(int i=0;i<(len/2);i++){
//     //Using the swap method to switch values at each index
//     swap(greeting[i],greeting[n]);
//     n = n-1;

//   }
//   cout<<greeting<<endl;
// }
int main(){

    string name ="shubham";
   
    

    reverse(name.begin(),name.end());
    cout<<name;
    return 0;

}