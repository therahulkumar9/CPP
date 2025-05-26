#include <iostream>
using namespace std;

int main()
{

    int hour;
    cout << "Enter hours: ";
    cin >> hour;
    if (hour > 24 || hour < 0 )
    {
        cout << "Invalid hour";
        cout << endl << "Please enter valid hour";
    }
    
    if (hour >= 9 && hour <= 18)
    {
        cout << "Working hour";
    }
    else
    {
        cout << "Leisure hour";
    }

    return 0;
}