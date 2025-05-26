#include <iostream>
using namespace std;

float add(float x, float y)
{
    float z = x + y;
    return z;
}

int main()
{

    float a = 10.6, b = 15.9, c;
    c = add(a, b);
    cout << "Add is: " << c << endl;

    // It is allowed to give same varible name in main function and add function
    float x = 13.6, y = 13.9, z;
    z = add(x, y);
    cout << "Add is: " << z;
    return 0;
}