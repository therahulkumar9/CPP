#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "Display of Base" << endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "Display of Derived" << endl;
    }
};
int main()
{

    // Derived d;
    // Base *ptr = &d;
    // ptr->display();

    
    cout << "Hello" << endl;
    Base *p = new Derived();
    p->display();

    return 0;
}