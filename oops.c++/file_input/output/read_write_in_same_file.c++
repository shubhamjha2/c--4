#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
    system("CLS");
    string st = "rahul chutiya hai";
    ofstream out("file");
    out << st;
    out.close();


    string s3;
    ifstream in("file");
    getline(in,s3);
    cout<<"the content of file is :       "<<s3;

    return 0;
}