#include <iostream>
using namespace std;

int main()
{

    int x;
    x = 10;
    int &y = x;
    cout << x << endl;
    cout << y << endl;
    cout << "Address of x: " << &x << " Address of y: " << &y << endl;
    x++;
    y++;
    cout << "After increment" << endl;
    cout << x << endl;
    cout << y << endl;
    int a = 30;
    int &z = a;
    cout << "Y: " << a + z << endl; // 30 + 30 = 
    
    int b = 20;
    y = b;   // We do this 
    // &y = b;   // we don't do this 
    cout << y;
    return 0;
}