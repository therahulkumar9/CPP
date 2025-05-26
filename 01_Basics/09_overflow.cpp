#include <iostream>
using namespace std;

int main()
{

    // char x = -128;
    // x--; // x is 127

    char x = 127;
    x += 1; // -128 overflow
    cout << (int)x << endl;
    // cout << x << endl;

    int y = INT32_MAX;
    y++; // It become smallest value of integer that is -2147483648
    cout << y;
    int z = INT32_MIN;
    z--;
    cout << endl << z; // 2147483647

    return 0;
}