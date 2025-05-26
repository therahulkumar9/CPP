#include <iostream>
using namespace std;
int main()
{
    cout << "Menu\n";
    cout << "1. Addition\n"
         << "2. Subtraction\n"
         << "3. Multiplication\n"
         << "4. Division\n";

    int option;
    cout << "Enter your choice ";
    cin >> option;


    // int a, b;
    // cout << endl << "Enter two numbers: ";
    // cin >> a >> b;
    

    // switch (option)
    // {
    // case 1:
    //     cout << a + b;
    //     break;
    // case 2:
    //     cout << a + b;
    //     break;
    // case 3:
    //     cout << a * b;
    //     break;
    // case 4:
    //     cout << a / b;
    //     break;
    // default:
    //     break;
    // }
    int a, b, c;
    cout << endl << "Enter two numbers: ";
    cin >> a >> b;

    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a + b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    default:
        break;
    }
    cout << "Result is: " << c << endl;
    return 0;
}