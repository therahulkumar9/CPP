#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "fun1 of Base" << endl;
    }
};
class Derived : public Base
{
public:
    void fun2()
    {
        cout << "fun2 of Derived" << endl;
    }
};
int main()
{
    cout << "Hello" << endl;
    Derived d;
    // d.fun1();
    // d.fun2();

    // Base *ptr = &d; // For stack
    Base *ptr;
    ptr = new Derived(); // For heap
    ptr->fun1();
    // ptr->fun2(); // error

    // Derived Class Pointer and Base class Objects
    Base b;
    // Derived *ptr2 = &b; // error

     return 0;
}