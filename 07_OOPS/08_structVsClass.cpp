#include <iostream>
using namespace std;

// In structure by default everything is public where as in a class everything is private - this is the different between class and structure
struct Demo
{
    int x;
    int y;

    // In C-language we have only data members inside structure but here also have function
    // In c++ structure look like a class
    void Display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d;
    d.x = 10;
    d.y = 20;
    d.Display();
    return 0;
}