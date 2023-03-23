#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    ofstream out;
    out.open("file B");
    out << "my name is shubham jha\n";
    out << "i will be placed in google\n";
    out << "tis is too easy to get placed at google";
    out.close();

    ifstream in;
    string st;
    in.open("file B");
    while (in.eof() == 0)
    {
        getline(in, st);
        
        cout << st<<endl;
    }
    return 0;
}