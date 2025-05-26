#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter 4 numbers: " << endl;
    // cin >> a >> b >> c >> d;
    a = 323, b = 34, c = 19, d = 9;

    if (a > b && a > c && a > d)
        cout << a << " is greatest";
    else if (b > c && b > d)
        cout << b << " is greatest";
    else if (c > d)
        cout << c << " is greatest";
    else
        cout << d << " is greatest";

    return 0;
}