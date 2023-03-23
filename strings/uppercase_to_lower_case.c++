#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string sentance = "My nAmE iS ShuBhaM";
    // cout << 'a' - 'A' << endl; // by this we know that the upper case word is 32 ahead

    for (i = 0; i < sentance.length(); i++)
    {
        if (sentance[i] >= 'a' && sentance[i] <= 'z')
        {
            sentance[i] -= 32;
        }

        else if (sentance[i]==' ')
        {
            sentance[i]==' ';
        }
        

        else
        {
            sentance[i] += 32;
        }
    }
    cout << sentance << endl;
    return 0;
}