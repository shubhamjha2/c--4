#include <iostream>
using namespace std;

class person
{ // this class is abstract class because it contains pure virtual functions
public:
    virtual void name() = 0; // pure virtual function
    virtual void age() = 0;\
    void print(){
        cout << "hello" << endl;
    }
};
class student : public person
{
public:
    void name()    //abstract class  make forced to 
    {
        cout << "shubham" << endl;
    }
    void age()
    {
        cout << "21" << endl;
    }
};

int main()
{
    student obj;

    obj.age();
    obj.name();
    obj.print();

    return 0;
}