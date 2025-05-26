#include <iostream>
using namespace std;
class Base
{
public:
    int x;
    void show()
    {
        cout << "\nShow of Base" << endl;
        cout << "Value of x is: " << x;
    }
};
class Derived : public Base
{
public:
    int y;
    void display()
    {
        cout << "\nDisplay of Derived" << endl;
        cout << "Value of x is: " << x << endl
             << "Value of y is: " << y;
    }
};
int main()
{
    Base b1;
    b1.x = 15;
    b1.show();
    Derived d1;
    d1.x = 34;
    d1.y = 45;
    d1.display();
    d1.show();
    return 0;
}