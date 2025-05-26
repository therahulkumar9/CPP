#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    int x1;
    // int 1x; // error: variable name cannot start with a digit
    int _x;
    int X;
    int RollNo;  // Correct usage, starts with uppercase
    int roll_no; // Correct usage, follows C-style naming convention
    // int if; // error: 'if' is a keyword and cannot be used as a variable name
    // int string; // Valid, 'string' is not a keyword in C++

    // Literals

    int a = 10;    // Decimal literal
    int a2 = 010;  // Octal literal (value is 8 in decimal)
    int a3 = 0x10; // Hexadecimal literal (value is 16 in decimal)
    cout << a << '\n'
         << a2 << '\n'
         << a3 << '\n';

    int b(10);     // Initialization using parentheses
    int b1 = 10;   // Initialization using assignment
    int b2 = {19}; // Initialization using curly braces
    int b3{89};    // Initialization using uniform initialization syntax
    int b4 = (9);  // Initialization using parentheses (same as b)
    cout << "Value of b b1 b2 b3" << endl;
    cout << b << '\n'
         << b1 << '\n'
         << b2 << '\n'
         << b3 << '\n';

    char aChar = 'A';   // Character literal
    char aChar2 = 65;   // ASCII value (65 corresponds to 'A')
    char aChar3 = 0x41; // Hexadecimal representation of 'A'
    char aChar4 = 66.5; // Truncated to integer value (66)
    cout << aChar << endl
         << aChar2 << endl
         << aChar3 << endl
         << aChar4 << endl;

    float af = 123.56;   // Floating-point literal
    float af2 = 123e2;   // Scientific notation (123 * 10^2)
    float af3 = 123e-2f; // Scientific notation (123 * 10^-2)
    cout << af << endl
         << af2 << endl
         << af3 << endl;

    string kal = "Hello sir"; // String literal
    cout << kal;

    return 0;
}
