// Switch case is faster than else if ladder

#include <iostream>
using namespace std;

int main()
{

    int x = 3;
    switch (x)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        // break;
    case 4:
        cout << "Four";
        break;
    default:
        cout << "Invalid day number";
        break;
    }

    cout << endl
         << endl;
    return 0;
}