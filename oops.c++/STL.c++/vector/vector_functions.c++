#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // cout << v.capacity() << endl;
    // cout << v.size();
    // cout << "\n\n";
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // cout << v.size();
    // cout << "\n\n";
    // v.push_back(120);
    // cout << v.capacity() << endl;
    // cout << v.size();
    // cout << "\n\n";
    // v.push_back(240);
    // cout << v.capacity() << endl;
    // cout << v.size();
    // cout << "\n\n";

    for (int i = 0; i < 9; i++)
    {
        v.push_back(i + 10); // use to add element at the end
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << "\n\n";

    cout << v.capacity() << endl; // tell about the capacity of vector
    cout << v.size();             // tell the total no of element
    cout << "\n\n";

    cout << "after pop operation ";
    v.pop_back();
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << "\n\n";

    cout << v.capacity() << endl; // tell about the capacity of vector
    cout << v.size();             // tell the total no of element
    cout << "\n\n";

    return 0;
}