#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ifstream ifs("Test.txt");
    ifstream ifs;
    ifs.open("Test.txt");
    if (ifs)
        cout << "File is open" << '\n';

    if (ifs.is_open())
    {
        cout << "File is opened" << '\n';
    }

    string name;
    int roll;
    string branch;

    ifs >> name >> roll >> branch;
    cout << "Name: " << name << endl
         << "Roll: " << roll << endl
         << "Branch: " << branch << endl;
    ifs.close();
}
