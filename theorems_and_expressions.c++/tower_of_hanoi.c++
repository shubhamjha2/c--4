#include <iostream>
using namespace std;

void toh(int n, char source, char auxiliary, char destination)
{
    
    if (n == 0)
    {
        return;
    }

    toh(n - 1, source, destination, auxiliary);
    cout << " Move " << n << " from " << source << " to " << destination << endl;
    
    toh(n - 1, auxiliary, source, destination);
}
int main()
{
    int n;
    char source = 'A';
    char auxiliary = 'B';
    char destination = 'C';
    cout << "enter the number of disk : ";
    cin >> n;
    toh(n, source, auxiliary, destination);
    return 0;
}