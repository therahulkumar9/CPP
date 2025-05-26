#include <iostream>
using namespace std;
class Outer
{
private:
    class Inner
    {
    public:
        void display()
        {
            cout << "Display of Inner" << endl;
        }
    };
    Inner i;

public:
    void fun()
    {
        i.display();
    };
};
int main()
{
    // Outer::Inner i; // I can access it if it is declare inside pubic
    Outer o;
    o.fun();
    return 0;
}