#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Default of Base" << endl; }
    Base(int x) { cout << "Param of Base " << x << endl; }
};
class Derived : public Base
{
public:
    Derived() { cout << "Default of Derived or Non-Param Derived" << endl; }
    Derived(int y) { cout << "Param of Derived " << y << endl; }
    Derived(int x, int y) : Base(x) { cout << "Param of Derived " << y << endl; }
};

int main()
{
    // Derived d1;
    // Default of Base
    // Default of Derived or  Non - Param Derived

    // Derived d2(5);
    // Default of Base
    // Param of Derived 5

    // Derived d3(10, 6);
    // Param of Base 10
    // Param of Derived 6

    return 0;
}