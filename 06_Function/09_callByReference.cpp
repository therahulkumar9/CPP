#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    cout << &a << " " << &b << endl;
    cout << a << " " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
    // If i use this complex code then the it automatically become call by address by compiler

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
}

int main()
{

    int x = 10, y = 20;
    swap(x, y);
    cout << &x << " " << &y << endl;
    cout << x << " " << y;

    return 0;
}