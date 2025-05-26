#include <iostream>
using namespace std;
// When we do "MAKE SURE" that the Signature or the Prototype of function is as it is same otherwise it become function overloading
class Base
{
public:
    void display()
    {
        cout << "Display of Base" << endl;
    }
};
class Derived : public Base
{
public:
    // void display()
    void display(int x)
    {
        cout << "Display of Derived" << endl;
    }
};
int main()
{
    cout << "Hello" << endl;
    Derived d;
    // d.display(); // Error
    d.display(10);
    d.Base::display();

    return 0;
}