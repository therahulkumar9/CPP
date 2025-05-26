#include <iostream>
using namespace std;
class Demo
{
public:
    int x = 10;
    int y = 20;

    void Display() const
    {
        // x++; // error due to constant function
        cout << x << " " << y;
    }
};
int main()
{
    Demo d;
    d.Display();

    return 0;
}