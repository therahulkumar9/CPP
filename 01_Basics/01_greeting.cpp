#include <iostream>
using namespace std;

int main()
{

    string name;
    cout << "May I know your name: ";
    // cin >> name; // It will only read first name
    getline(cin, name); // It will read complete line until user hit enter
    cout << "Welcome Sir/Madam " << name;
    cout << endl
         << sizeof(name);
    return 0;
}