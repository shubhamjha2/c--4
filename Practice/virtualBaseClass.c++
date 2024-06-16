#include <iostream>
using namespace std;

class A {
public:

    A() {
        cout << "A class constructor called" << endl;
    }
    void show() {
        cout << "A class show function" << endl;
    }
};

class B : virtual public A {
public:
    B() {
        cout << "B class constructor called" << endl;
    }
};

class C : virtual public A {
public:
    C() {
        cout << "C class constructor called" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "D class constructor called" << endl;
    }
};

int main() {
    D obj;
    obj.show(); // Calls the Base class show function

    return 0;
}
