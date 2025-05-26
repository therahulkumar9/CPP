#include <iostream>
using namespace std;

int main()
{

    // It print Hello!

    if (1)
    {
        cout << "Hello!" << endl;
    }

    // It print nothing
    if (0)
    {
        cout << "Hello2";
    }
    // It print Hello3
    if (-10)
    {
        cout << "Hello3" << endl;
    }
    // It print Hello4 if it's true otherwise print Bye

    if (false)
    {
        cout << "Hello4" << endl;
    }
    else
    {
        cout << "Bye" << endl;
    }

    int roll;

    cout << "Enter your Roll number: ";
    cin >> roll;

    if (roll < 1)
    {
        cout << "Invalid roll number";
    }
    else
    {
        cout << "Valid roll number" << endl;
    }

    int bca_roll;
    cout << "Enter you BCA first year roll number: ";
    cin >> bca_roll;
    if (bca_roll >= 1 && bca_roll <= 120)
    {
        cout << "Valid roll number";
    }
    else
    {
        cout << "Invalid roll number";
    }

    return 0;
}