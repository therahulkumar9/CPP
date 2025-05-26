#include <iostream>
#include <string>

using namespace std;
int main()
{

    int x;
    int x1;
    // int 1x; // error
    int _x;
    int X;
    int RollNo;  // C++
    int roll_no; // C-language
    // int if; // error // we can not use keyword name as a variable

    // ********** It create a big problem ************
    int string; // I can use class name string as a variable name because it is not the part of compiler

    // Literals

    int a = 10;    // 10 is integer lateral
    int a2 = 010;  // 010 is a octal lateral ----- value if 8
    int a3 = 0x10; // hexa --- value is 16
    cout << a << '\n'
         << a2 << '\n'
         << a3 << '\n';
    int b(10);
    int b1 = 10;
    int b2 = {19};
    int b3{89};
    int b4 = (9);
    cout << "Value of b b1 b2 b3" << endl;
    cout << b << '\n'
         << b1 << '\n'
         << b2 << '\n'
         << b3 << '\n';
    char aChar = 'A';
    char aChar2 = 65; // 65 is also A in ascii
    char aChar3 = 0x41;
    char aChar4 = 66.5; // It truncate to 66
    cout << aChar << endl
         << aChar2 << endl
         << aChar3 << endl
         << aChar4 << endl;

    float af = 123.56;
    float af2 = 123e2;
    float af3 = 123e-2f;
    cout << af << endl
         << af2 << endl
         << af3 << endl;

    string str;
    str = "MS";
    cout << str; // see line 18
    return 0;
}