#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> student = {{"ram", 7}, {"satyam", 35}, {"ramesh", 73}, {"uttam", 92}, {"uvesh", 02}, {"ritu", 99}};
    map<string, int>::iterator p = student.begin();
    while (p != student.end())
    {
        cout << "the key is ";
        cout << p->first << endl;
        cout << "the value is ";
        cout << p->second << endl;
        p++;
    }
    // functions in map
    cout << "\n\n\n";
    cout << student["uvesh"]; // 2    []
    cout << "\n\n\n";
    cout << student.at("ritu"); // 99  at()
    cout << "\n\n\n";
    student.insert(pair<string,int>("sudhanshu",35)); 
    map<string, int>::iterator q = student.begin();
    while (q != student.end())
    {
        cout << "the key is ";
        cout << q->first << endl;
        cout << "the value is ";
        cout << q->second << endl;
        q++;
    }
   

    return 0;
}