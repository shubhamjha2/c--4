#include <iostream>
using namespace std;
int search(int n, int arr[] , int key)
{
    int start = 0;
    int end = n;
    int mid;
    cout<<" the  index of of the key is    ";
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, i, key;
cout<<"enter the number of index   ";
    cin >> n;

    int arr[n];
cout<<"enter the elements of array   ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"enter the key that you want to find   ";
    cin >> key;
    cout<<search( n,arr,key);
    return 0;
}