#include <iostream>
using namespace std;
int search(int arr[],int n ,int key){
    int j;
    for ( j = 0; j < n ; j++)
    {
       if(arr[j]==key){
        cout<<"index is ";
        return j;
       }
       
    }
    return  -1;
   
}
int main()
{
    int n, i, key;
cout<<"total number of array : ";
    cin >> n;
    cout<<" values  of array : ";
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    cout<<"enter the key ";
    cin >> key;
cout<<search( arr,n,key)<<endl;
    return 0;
}