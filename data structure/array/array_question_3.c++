/*  https://www.youtube.com/watch?v=eJcBH0xvG98&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=23&t=122s&ab_channel=ApnaCollege  */

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "enter the no. of index  ";
    cin >> n;
    int arr[n];
    cout << "enter the values of array  ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int current = 2;
    int min;
    int previous_answer = arr[1] - arr[0];

    for (i = 2; i < n; i++)
    {
        if (previous_answer == arr[i] - arr[i - 1])
        {
            current ++;
        }
        else
        {
            previous_answer = arr[i] - arr[i - 1];
            current = 2;
        }
        min = max(min, current);
    }
    cout << " the longest contiginous sub array is : "<<min;
    

    return 0;
}