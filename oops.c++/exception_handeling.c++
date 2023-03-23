#include <iostream>
using namespace std;

int main()
{
    try
    {

        cout << "welcome";

        // throw 's';
        // throw 6;
        throw 702.3;
    }
    catch (int a)
    {
        cout << " the exception is : " << a;
    }
    catch (char st)
    {
        cout << " the exception is : " << st;
    }
    catch (double b)
    {
        cout << " the exception is : " << b;
    }

    return 0;
}