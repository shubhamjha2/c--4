#include <iostream>

using namespace std;

 

class Example

{

private:

                     int a, b;

 

public:

                     // Parameterized Constructor

                     Example(int a1, int b1)

                     {

                      a = a1;

                      b = b1;

                     }

 

                     int getA()

                     {

                      return a;

                     }

                     int getB()

                     {

                      return b;

                     }

};

int main()

{

                     // Calling the constructor

                     Example e1(5, 10);

 

                     cout << “e1.a = ” << e1.getA() << “, e1.b = ” << e1.getB();

 

                     return 0;

}