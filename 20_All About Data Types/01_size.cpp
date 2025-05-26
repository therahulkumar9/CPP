#include <iostream>
using namespace std;
int main()
{

    // char x; // 1
    // int x; // 4
    // float x; // 4
    // double x; // 8
    // long double x; // 16 bytes
    unsigned char x; // 1

    cout << sizeof(x) << endl;
    // cout << CHAR_MAX << " to " << CHAR_MIN;
    // cout << UCHAR_MAX; // 255
    cout << INT_MIN << " to " << INT_MAX;

    return 0;
}