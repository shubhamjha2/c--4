#include <iostream>

class Base {
protected:
    int privateInt;
    // double privateDouble;
};

class Derived : public Base {
public:
    int publicInt;
};

int main() {
    std::cout << "Size of Base: " << sizeof(Base) << " bytes" << std::endl;
    std::cout << "Size of Derived: " << sizeof(Derived) << " bytes" << std::endl;

    return 0;
}
