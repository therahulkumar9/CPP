#include <iostream>
using namespace std;

int main()
{
    // for (int i = 127; i >= -128; i--)
    // {
    //     cout << static_cast<char>(i);
    // }


    // int x = 11, y = 5, z;



    // int x = 11, y = 7, z;
    // //  z = x & y; // 3
    // //  z = x | y; // 15
    //  z = x ^ y; // 12
    //  cout << z << endl;


    char x = 20,y;
    // y = x << 1; // It means x is multiply by 2
    y = x >> 1; // It means x is divide by 2
     
    cout << (int)y << endl;


    char l = 5, m;
    m = ~l; // -6

    cout << (int)m << endl;


    return 0;
}