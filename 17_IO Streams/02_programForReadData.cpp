#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("Read.txt");
    // if (!infile)
    //     cout << "File cannot be opened";
    // if (!infile.is_open())
    //     cout << "File cannot be opened";
    string str;
    int x;
    infile >> str;
    infile >> x;
    cout << str << " " << x << endl;
    // It read only  first letter of next line and space is skipped
    char y;
    infile >> y;
    cout << (int)y << '\n';
    if (infile.eof())
        cout << "End of file reached";
    return 0;
}