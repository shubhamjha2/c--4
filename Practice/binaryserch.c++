#include <iostream>
#include <vector>

using namespace std;

// Function to perform binary search on a sorted vector
// int bin(const vector<int>& arr, int key) {
//   int low = 0;
//   int high = arr.size() - 1;

//   while (low <= high) {
//     int mid = low + (high - low) / 2;

//     if (arr[mid] == key) {
//       return mid;
//     } else if (arr[mid] < key) {
//       low = mid + 1;
//     } else {
//       high = mid - 1;
//     }
//   }

//   return -1;
// }

int bin(vector<int> arr, int key, int s, int e)
{
    int mid = (s + e) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if(arr[mid]>key){
        return bin(arr,key,s,mid-1);
    }
    if(arr[mid]<key){
        return bin(arr,key,mid+1,e);
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int key = 11;

    int index = bin(arr, key, 0, arr.size());

    if (index != -1)
    {
        cout << "Key found at index: " << index << endl;
    }
    else
    {
        cout << "Key not found in the array" << endl;
    }

    return 0;
}